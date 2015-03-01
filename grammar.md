# Grammar

## Definition
These lines contain the grammar matching with the Lutin language, that is used in the project.


>P &rarr; BD BI  
BD &rarr; BD D pv | &#603;  
BI &rarr; BI I pv | &#603;  
D &rarr; var id IDL  
IDL &rarr; IDL vir id | &#603;  
D &rarr; const INI INIL  
INIL &rarr; INIL vir INI | &#603;  
INI &rarr; id eg num  
I &rarr; ecrire E'  
I &rarr; id aff E'  
I &rarr; lire id  
E' &rarr; E  
E &rarr; E + T  
E &rarr; E - T  
E &rarr; T  
T &rarr; T * F  
T &rarr; T / F  
T &rarr; F  
F &rarr; (E)  
F &rarr; id  
F &rarr; num

### Indications

#### Nonterminal symbols
 Symbol |  Meaning
:------:|:---------
 P      | Program  
 BD     | Declaration Block  
 BI     | Instruction Block  
 D      | Declaration  
 I      | Instruction  
 IDL    | IDentifiers List  
 INI    | INItializer  
 INIL   | INItialisers List  
 E/E'   | Expression ( '+' / '-' term)  
 T      | Term ( '/' / '*' term)  
 F      | Final

#### Terminal symbols
 Symbol |  Meaning                      |  Regular Expression
:------:|:------------------------------|:--------------------
pv      | semicolon                     | ;
id      | identifier (variable name)    | [ a-zA-Z\_ ] [ a-zA-Z0-9\_ ]\*
var     | 'var' keyword                 | var
vir     | comma                         | ,
const   | 'const' keyword               | const
eg      | '=' character                 | =
num     | number                        | [ 0-9 ]+( ,[ 0-9 ]+ )?
ecrire  | 'ecrire' keyword              | ecrire
lire    | 'lire' keyword                | lire


