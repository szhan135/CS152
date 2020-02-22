%{
  #include "y.tab.h"
  
  int currLine = 1, currPos = 0;
%}

/*To define different patterns*/

DIGIT [0-9]
D_UNDERSCORE [0-9_]
CHARACTERS [a-zA-Z]
L_UNDERSCORE [a-zA-Z_]
CHAR [0-9a-zA-Z_]
IDENT [0-9a-zA-Z]
WHITESPACE [\t ]
NEWLINE [\n]

/* Reserved words and special symbols part. Replace prinf with return to work with parser */
%%

"-"       return SUB; ++currPos;
"+"       return ADD; ++currPos;
"*"       return MULT; ++currPos;
"/"       return DIV; ++currPos;
"%"       return MOD; ++currPos;

"=="      return EQ; currPos += 2;
"<>"      return NEQ; currPos += 2;
"<"       return LT; ++currPos;
">"       return GT; ++currPos;
"<="      return LTE; currPos += 2;
">="      return GTE; currPos += 2;

"function"     return FUNCTION; currPos += yyleng;
"beginparams"  return BEGIN_PARAMS; currPos += yyleng;
"endparams"    return END_PARAMS;  currPos += yyleng;
"beginlocals"  return BEGIN_LOCALS; currPos += yyleng;
"endlocals"    return END_LOCALS; currPos += yyleng;
"beginbody"    return BEGIN_BODY; currPos += yyleng;
"endbody"      return END_BODY; currPos += yyleng;
"integer"      return INTEGER; currPos += yyleng;
"array"        return ARRAY; currPos += yyleng;
"of"           return OF; currPos += yyleng;
"if"           return IF; currPos += yyleng;
"then"         return THEN; currPos += yyleng;
"endif"        return ENDIF; currPos += yyleng;
"else"         return ELSE; currPos += yyleng;
"while"        return WHILE; currPos += yyleng;
"do"           return DO; currPos += yyleng;
"for"      	   return FOR; currPos += yyleng;
"in"           return IN; currPos += yyleng;
"beginloop"    return BEGINLOOP; currPos += yyleng;
"endloop"      return ENDLOOP; currPos += yyleng;
"continue"     return CONTINUE; currPos += yyleng;
"read"         return READ; currPos += yyleng;
"write"        return WRITE; currPos += yyleng;
"and"          return AND; currPos += yyleng;
"or"           return OR; currPos += yyleng;
"not"          return NOT; currPos += yyleng;
"true"         return TRUE; currPos += yyleng;
"false"        return FALSE; currPos += yyleng;
"return"       return RETURN; currPos += yyleng;

";"       return SEMICOLON; ++currPos;
":"       return COLON; ++currPos;
","       return COMMA; ++currPos;
"("       return L_PAREN; ++currPos;
")"       return R_PAREN; ++currPos;
"["       return L_SQUARE_BRACKET; ++currPos;
"]"       return R_SQUARE_BRACKET; ++currPos;
":="      return ASSIGN; currPos += 2;

{CHARACTERS}({CHAR}*{IDENT}+)? {
  yylval.valIdent = yytext;
  return IDENT;
  currPos += yyleng;
	}

{DIGIT}+ {
  yylval.num = atoi(yytext);
  return NUMBER;
  currPos += yyleng;
       }

({DIGIT}+{L_UNDERSCORE}{CHAR}*)|("_"{CHAR}+) {
  printf("Error at line %d, column %d: identifier \"%s\" should begin with a letter.\n",
	 currLine, currPos, yytext);
  exit(1);
		       }

{CHARACTERS}({CHAR}*{IDENT}+)?"_" 	{printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore.\n",currLine, currPos, yytext); exit(1);}


"##".*{NEWLINE} currPos = 0; ++currLine;

{WHITESPACE}+   currPos += yyleng;
{NEWLINE}+      currLine += yyleng; currPos = 0;

. 	{printf("Error at line %d, column %d: unrecognized symbol \"%s\" \n", currLine, currPos, yytext); exit(1);}

%%
int yyparse();

int main(int argc, char* argv[]) {
  if (argc == 2) {
    yyin = fopen(argv[1], "r");
    if (yyin == 0) {
      printf("Error opening file: %s\n", argv[1]);
      exit(1);
    }
  }
  else {
    yyin = stdin;
  }

  //yylex();
  yyparse();
  
  return 0;
}
