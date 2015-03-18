# Lutin
Project grammar and language: Lutin analyzer and interpreter.



## Project structure

Folder  | Content
------------- | -------------
*src* | Source files
*tests* | Tests scripts
*doc* | Documentation, if done
*concep* | Conception documents etc ...
*code_generation* | Scripts and files for automatic code generation
*regex_example* | An example of the use of regex/boost

## Build

Release mode:
```shell
make
```
Debug mode:
```shell
make debug
```
## Use
```
    Usage: lut [options] <input_file>

Allowed options:
  --input_file arg      Path to the Lutin input file
  -p [ --print ]        Display the code program on the standard output
  -a [ --analyze ]      Static analysis of the program
  -e [ --execute ]      Execute the program
  -o [ --optimize ]     Simplify and transform the program
  -h [ --help ]         Print this help message and exit
```

## Logo

TODO: ascii picture
TODO: select ascii art font:

```
      ___       ___           ___                       ___     
     /\__\     /\__\         /\  \          ___        /\__\    
    /:/  /    /:/  /         \:\  \        /\  \      /::|  |   
   /:/  /    /:/  /           \:\  \       \:\  \    /:|:|  |   
  /:/  /    /:/  /  ___       /::\  \      /::\__\  /:/|:|  |__ 
 /:/__/    /:/__/  /\__\     /:/\:\__\  __/:/\/__/ /:/ |:| /\__\
 \:\  \    \:\  \ /:/  /    /:/  \/__/ /\/:/  /    \/__|:|/:/  /
  \:\  \    \:\  /:/  /    /:/  /      \::/__/         |:/:/  / 
   \:\  \    \:\/:/  /     \/__/        \:\__\         |::/  /  
    \:\__\    \::/  /                    \/__/         /:/  /   
     \/__/     \/__/                                   \/__/    
```

```
__/\\\_____________________________________________________________        
 _\/\\\_____________________________________________________________       
  _\/\\\_______________________________/\\\_______/\\\_______________      
   _\/\\\______________/\\\____/\\\__/\\\\\\\\\\\_\///___/\\/\\\\\\___     
    _\/\\\_____________\/\\\___\/\\\_\////\\\////___/\\\_\/\\\////\\\__    
     _\/\\\_____________\/\\\___\/\\\____\/\\\______\/\\\_\/\\\__\//\\\_   
      _\/\\\_____________\/\\\___\/\\\____\/\\\_/\\__\/\\\_\/\\\___\/\\\_  
       _\/\\\\\\\\\\\\\\\_\//\\\\\\\\\_____\//\\\\\___\/\\\_\/\\\___\/\\\_ 
        _\///////////////___\/////////_______\/////____\///__\///____\///__
 ```
 
 ```
        ,gggg,                                          
      d8" "8I                 I8                       
      88  ,dP                 I8                       
   8888888P"               88888888  gg                
      88                      I8     ""                
      88        gg      gg    I8     gg    ,ggg,,ggg,  
 ,aa,_88        I8      8I    I8     88   ,8" "8P" "8, 
dP" "88P        I8,    ,8I   ,I8,    88   I8   8I   8I 
Yb,_,d88b,,_   ,d8b,  ,d8b, ,d88b, _,88,_,dP   8I   Yb,
 "Y8P"  "Y888888P'"Y88P"`Y888P""Y888P""Y88P'   8I   `Y8
 ```