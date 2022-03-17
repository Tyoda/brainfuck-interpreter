Interpreter config:
 - + increases cell value cursor is on ; - decrease cell value cursor is on ; < move cursor > ;  [ loop ] ; . write cell value to stdout in ascii ; , read to cell ;
 - cell values go 0..255, wraps around
 - infinite memory, if you have infinite memory, anyway
 - characters other than +-<>[],. are ignored

usage:
  - compile with "./build.sh" or './build.bat'
  - give brainfuck program as single argument such as './brain "+++++++++++[>++++++<-]>-.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+++++++.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+."'
