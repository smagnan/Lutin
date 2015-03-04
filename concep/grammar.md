# Grammar

## Definition
These lines contain the grammar matching with the Lutin language, that is used in the project.


>**1)** P &rarr; BD BI  
**2)** BD &rarr; BD D pv   
**3)** BI &rarr; BI I pv   
**4)** D &rarr; var id IDL  
**5)** IDL &rarr; IDL vir id   
**6)** D &rarr; const INI INIL  
**7)** INIL &rarr; INIL vir INI  
**8)** INI &rarr; id eg num  
**9)** I &rarr; ecrire E'  
**10)** I &rarr; id aff E'  
**11)** I &rarr; lire id  
**12)** E' &rarr; E  
**13)** E &rarr; E + T  
**14)** E &rarr; E - T  
**15)** E &rarr; T  
**16)** T &rarr; T \* F  
**17)** T &rarr; T / F  
**18)** T &rarr; F  
**19)** F &rarr; (E)  
**20)** F &rarr; id  
**21)** F &rarr; num  
**22)** BD &rarr; &#603;  
**23)** BI &rarr; &#603;  
**24)** IDL &rarr; &#603;  
**25)** INIL &rarr; &#603;  

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
+       | '+' character                 | +
-       | '-' character                 | -
*       | '*' character                 | *
/       | '/' character                 | /
(       | '(' character                 | (
)       | ')' character                 | )
pv      | semicolon                     | ;
id      | identifier (variable name)    | [ a-zA-Z\_ ] [ a-zA-Z0-9\_ ]\*
var     | 'var' keyword                 | var
vir     | comma                         | ,
const   | 'const' keyword               | const
eg      | '=' character                 | =
aff     | ':=' characters               | :=
num     | number                        | [ 0-9 ]+( ,[ 0-9 ]+ )?
ecrire  | 'ecrire' keyword              | ecrire
lire    | 'lire' keyword                | lire


