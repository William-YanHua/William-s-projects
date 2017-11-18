#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 51 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# myparser.v
# YACC verbose file generated from myparser.y.
# 
# Date: 11/18/17
# Time: 22:13:39
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : begin $end

    1  begin : begin Program ENDFLAG
    2        | begin ENDFLAG
    3        |

    4  Program : RELOOP
    5          | VAR_DECLARE
    6          |

    7  RELOOP : FOR_KEY LBRACKET FOR_EXPR RBRACKET LBRACE_EXPR STATEMENT RBRACE_EXPR
    8         | WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET LBRACE_EXPR STATEMENT RBRACE_EXPR
    9         | DO_KEY LBRACE_EXPR STATEMENT RBRACE_EXPR WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET SEMICOLON_EXPR

   10  LBRACE_EXPR : LBRACE ENDFLAG
   11              | LBRACE

   12  RBRACE_EXPR : RBRACE ENDFLAG
   13              | RBRACE

   14  SEMICOLON_EXPR : SEMICOLON ENDFLAG
   15                 | SEMICOLON

   16  FOR_KEY : FOR

   17  WHILE_KEY : WHILE

   18  DO_KEY : DO

   19  FOR_EXPR : FIRST_PART SECOND_PART THIRD_PART

   20  FIRST_PART : VAR_DECLARE
   21             |

   22  SECOND_PART : LOGICAL_OPERATION S_PART
   23              |

   24  S_PART : COMMA LOGICAL_OPERATION S_PART
   25         | SEMICOLON_EXPR

   26  LOGICAL_OPERATION : IDs LOGICAL_OPTION VALUE
   27                    |

   28  LOGICAL_OPTION : MORE
   29                 | LESS
   30                 | MORE_EQU
   31                 | LESS_EQU

   32  THIRD_PART : NORMAL_MATH_OPERATION
   33             | TRUE
   34             | FALSE
   35             | VALUE
   36             |

   37  VALUE : INTEGER

   38  NORMAL_MATH_OPERATION : IDs OPTION OTHER

   39  OTHER : COMMA NORMAL_MATH_OPERATION
   40        |

   41  OPTION : SADD
   42         | SSUB
   43         | PLUS_AND VALUE
   44         | MINUS_AND VALUE

   45  STATEMENT : VAR_DECLARE
   46            |

   47  VAR_DECLARE : TYPE IDLIST SEMICOLON_EXPR VAR_DECLARE
   48              |

   49  TYPE : INT
   50       | FLOAT
   51       | CHAR
   52       | STRING
   53       | VOID

   54  IDLIST : IDEXPR TERMINATE

   55  IDEXPR : IDs ASSIGN_EXPR

   56  ASSIGN_EXPR : ASSIGN TYPE_VAL TERMINATE
   57              | ASSIGN IDs TERMINATE
   58              | ASSIGN expr
   59              | ASSIGN MINUS IDs

   60  TYPE_VAL : INTEGER_VAL
   61           | CHAR_VAL
   62           | FLOAT_VAL

   63  INTEGER_VAL : INTEGER

   64  IDs : ID

   65  TERMINATE : COMMA IDLIST
   66            |

   67  expr : expr1 PLUS expr1
   68       | expr1 MINUS expr1
   69       | expr1

   70  expr1 : expr2 MUL expr2
   71        | expr2 DIV expr2
   72        | LBRACKET expr RBRACKET
   73        | expr2

   74  expr2 : INTEGER_VAL
   75        | MINUS INTEGER
   76        | expr1
   77        | LBRACKET expr2 RBRACKET


##############################################################################
# States
##############################################################################

state 0
	$accept : . begin $end
	begin : .  (3)

	.  reduce 3

	begin  goto 1


1: shift-reduce conflict (shift 10, reduce 6) on ENDFLAG
1: shift-reduce conflict (shift 10, reduce 48) on ENDFLAG
state 1
	$accept : begin . $end  (0)
	begin : begin . Program ENDFLAG
	begin : begin . ENDFLAG
	Program : .  (6)
	VAR_DECLARE : .  (48)

	$end  accept
	INT  shift 2
	FLOAT  shift 3
	STRING  shift 4
	VOID  shift 5
	CHAR  shift 6
	FOR  shift 7
	WHILE  shift 8
	DO  shift 9
	ENDFLAG  shift 10

	FOR_KEY  goto 11
	VAR_DECLARE  goto 12
	DO_KEY  goto 13
	Program  goto 14
	WHILE_KEY  goto 15
	RELOOP  goto 16
	TYPE  goto 17


state 2
	TYPE : INT .  (49)

	.  reduce 49


state 3
	TYPE : FLOAT .  (50)

	.  reduce 50


state 4
	TYPE : STRING .  (52)

	.  reduce 52


state 5
	TYPE : VOID .  (53)

	.  reduce 53


state 6
	TYPE : CHAR .  (51)

	.  reduce 51


state 7
	FOR_KEY : FOR .  (16)

	.  reduce 16


state 8
	WHILE_KEY : WHILE .  (17)

	.  reduce 17


state 9
	DO_KEY : DO .  (18)

	.  reduce 18


state 10
	begin : begin ENDFLAG .  (2)

	.  reduce 2


state 11
	RELOOP : FOR_KEY . LBRACKET FOR_EXPR RBRACKET LBRACE_EXPR STATEMENT RBRACE_EXPR

	LBRACKET  shift 18


state 12
	Program : VAR_DECLARE .  (5)

	.  reduce 5


state 13
	RELOOP : DO_KEY . LBRACE_EXPR STATEMENT RBRACE_EXPR WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET SEMICOLON_EXPR

	LBRACE  shift 19

	LBRACE_EXPR  goto 20


state 14
	begin : begin Program . ENDFLAG

	ENDFLAG  shift 21


state 15
	RELOOP : WHILE_KEY . LBRACKET LOGICAL_OPERATION RBRACKET LBRACE_EXPR STATEMENT RBRACE_EXPR

	LBRACKET  shift 22


state 16
	Program : RELOOP .  (4)

	.  reduce 4


state 17
	VAR_DECLARE : TYPE . IDLIST SEMICOLON_EXPR VAR_DECLARE

	ID  shift 23

	IDLIST  goto 24
	IDs  goto 25
	IDEXPR  goto 26


18: reduce-reduce conflict (reduce 21, reduce 48) on INTEGER
18: reduce-reduce conflict (reduce 21, reduce 48) on ID
18: reduce-reduce conflict (reduce 21, reduce 48) on COMMA
18: reduce-reduce conflict (reduce 21, reduce 48) on SEMICOLON
18: reduce-reduce conflict (reduce 21, reduce 48) on RBRACKET
18: reduce-reduce conflict (reduce 21, reduce 48) on FALSE
18: reduce-reduce conflict (reduce 21, reduce 48) on TRUE
state 18
	RELOOP : FOR_KEY LBRACKET . FOR_EXPR RBRACKET LBRACE_EXPR STATEMENT RBRACE_EXPR
	FIRST_PART : .  (21)
	VAR_DECLARE : .  (48)

	INT  shift 2
	FLOAT  shift 3
	STRING  shift 4
	VOID  shift 5
	CHAR  shift 6
	.  reduce 21

	VAR_DECLARE  goto 27
	FOR_EXPR  goto 28
	FIRST_PART  goto 29
	TYPE  goto 17


state 19
	LBRACE_EXPR : LBRACE . ENDFLAG
	LBRACE_EXPR : LBRACE .  (11)

	ENDFLAG  shift 30
	.  reduce 11


20: reduce-reduce conflict (reduce 46, reduce 48) on RBRACE
state 20
	RELOOP : DO_KEY LBRACE_EXPR . STATEMENT RBRACE_EXPR WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET SEMICOLON_EXPR
	VAR_DECLARE : .  (48)
	STATEMENT : .  (46)

	INT  shift 2
	FLOAT  shift 3
	STRING  shift 4
	VOID  shift 5
	CHAR  shift 6
	.  reduce 46

	VAR_DECLARE  goto 31
	STATEMENT  goto 32
	TYPE  goto 17


state 21
	begin : begin Program ENDFLAG .  (1)

	.  reduce 1


state 22
	RELOOP : WHILE_KEY LBRACKET . LOGICAL_OPERATION RBRACKET LBRACE_EXPR STATEMENT RBRACE_EXPR
	LOGICAL_OPERATION : .  (27)

	ID  shift 23
	.  reduce 27

	IDs  goto 33
	LOGICAL_OPERATION  goto 34


state 23
	IDs : ID .  (64)

	.  reduce 64


state 24
	VAR_DECLARE : TYPE IDLIST . SEMICOLON_EXPR VAR_DECLARE

	SEMICOLON  shift 35

	SEMICOLON_EXPR  goto 36


state 25
	IDEXPR : IDs . ASSIGN_EXPR

	ASSIGN  shift 37

	ASSIGN_EXPR  goto 38


26: shift-reduce conflict (shift 39, reduce 66) on COMMA
state 26
	IDLIST : IDEXPR . TERMINATE
	TERMINATE : .  (66)

	COMMA  shift 39
	.  reduce 66

	TERMINATE  goto 40


state 27
	FIRST_PART : VAR_DECLARE .  (20)

	.  reduce 20


state 28
	RELOOP : FOR_KEY LBRACKET FOR_EXPR . RBRACKET LBRACE_EXPR STATEMENT RBRACE_EXPR

	RBRACKET  shift 41


29: shift-reduce conflict (shift 23, reduce 23) on ID
state 29
	FOR_EXPR : FIRST_PART . SECOND_PART THIRD_PART
	LOGICAL_OPERATION : .  (27)
	SECOND_PART : .  (23)

	ID  shift 23
	COMMA  reduce 27
	SEMICOLON  reduce 27
	.  reduce 23

	IDs  goto 33
	LOGICAL_OPERATION  goto 42
	SECOND_PART  goto 43


state 30
	LBRACE_EXPR : LBRACE ENDFLAG .  (10)

	.  reduce 10


state 31
	STATEMENT : VAR_DECLARE .  (45)

	.  reduce 45


state 32
	RELOOP : DO_KEY LBRACE_EXPR STATEMENT . RBRACE_EXPR WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET SEMICOLON_EXPR

	RBRACE  shift 44

	RBRACE_EXPR  goto 45


state 33
	LOGICAL_OPERATION : IDs . LOGICAL_OPTION VALUE

	LESS  shift 46
	MORE  shift 47
	LESS_EQU  shift 48
	MORE_EQU  shift 49

	LOGICAL_OPTION  goto 50


state 34
	RELOOP : WHILE_KEY LBRACKET LOGICAL_OPERATION . RBRACKET LBRACE_EXPR STATEMENT RBRACE_EXPR

	RBRACKET  shift 51


35: shift-reduce conflict (shift 52, reduce 15) on ENDFLAG
state 35
	SEMICOLON_EXPR : SEMICOLON . ENDFLAG
	SEMICOLON_EXPR : SEMICOLON .  (15)

	ENDFLAG  shift 52
	.  reduce 15


state 36
	VAR_DECLARE : TYPE IDLIST SEMICOLON_EXPR . VAR_DECLARE
	VAR_DECLARE : .  (48)

	INT  shift 2
	FLOAT  shift 3
	STRING  shift 4
	VOID  shift 5
	CHAR  shift 6
	.  reduce 48

	VAR_DECLARE  goto 53
	TYPE  goto 17


state 37
	ASSIGN_EXPR : ASSIGN . expr
	ASSIGN_EXPR : ASSIGN . IDs TERMINATE
	ASSIGN_EXPR : ASSIGN . TYPE_VAL TERMINATE
	ASSIGN_EXPR : ASSIGN . MINUS IDs

	FLOAT_VAL  shift 54
	INTEGER  shift 55
	ID  shift 23
	MINUS  shift 56
	LBRACKET  shift 57
	CHAR_VAL  shift 58

	expr2  goto 59
	INTEGER_VAL  goto 60
	expr  goto 61
	expr1  goto 62
	IDs  goto 63
	TYPE_VAL  goto 64


state 38
	IDEXPR : IDs ASSIGN_EXPR .  (55)

	.  reduce 55


state 39
	TERMINATE : COMMA . IDLIST

	ID  shift 23

	IDLIST  goto 65
	IDs  goto 25
	IDEXPR  goto 26


state 40
	IDLIST : IDEXPR TERMINATE .  (54)

	.  reduce 54


state 41
	RELOOP : FOR_KEY LBRACKET FOR_EXPR RBRACKET . LBRACE_EXPR STATEMENT RBRACE_EXPR

	LBRACE  shift 19

	LBRACE_EXPR  goto 66


state 42
	SECOND_PART : LOGICAL_OPERATION . S_PART

	COMMA  shift 67
	SEMICOLON  shift 35

	S_PART  goto 68
	SEMICOLON_EXPR  goto 69


state 43
	FOR_EXPR : FIRST_PART SECOND_PART . THIRD_PART
	THIRD_PART : .  (36)

	INTEGER  shift 70
	ID  shift 23
	FALSE  shift 71
	TRUE  shift 72
	.  reduce 36

	VALUE  goto 73
	IDs  goto 74
	THIRD_PART  goto 75
	NORMAL_MATH_OPERATION  goto 76


44: shift-reduce conflict (shift 77, reduce 13) on ENDFLAG
state 44
	RBRACE_EXPR : RBRACE . ENDFLAG
	RBRACE_EXPR : RBRACE .  (13)

	ENDFLAG  shift 77
	.  reduce 13


state 45
	RELOOP : DO_KEY LBRACE_EXPR STATEMENT RBRACE_EXPR . WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET SEMICOLON_EXPR

	WHILE  shift 8

	WHILE_KEY  goto 78


state 46
	LOGICAL_OPTION : LESS .  (29)

	.  reduce 29


state 47
	LOGICAL_OPTION : MORE .  (28)

	.  reduce 28


state 48
	LOGICAL_OPTION : LESS_EQU .  (31)

	.  reduce 31


state 49
	LOGICAL_OPTION : MORE_EQU .  (30)

	.  reduce 30


state 50
	LOGICAL_OPERATION : IDs LOGICAL_OPTION . VALUE

	INTEGER  shift 70

	VALUE  goto 79


state 51
	RELOOP : WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET . LBRACE_EXPR STATEMENT RBRACE_EXPR

	LBRACE  shift 19

	LBRACE_EXPR  goto 80


state 52
	SEMICOLON_EXPR : SEMICOLON ENDFLAG .  (14)

	.  reduce 14


state 53
	VAR_DECLARE : TYPE IDLIST SEMICOLON_EXPR VAR_DECLARE .  (47)

	.  reduce 47


state 54
	TYPE_VAL : FLOAT_VAL .  (62)

	.  reduce 62


state 55
	INTEGER_VAL : INTEGER .  (63)

	.  reduce 63


state 56
	ASSIGN_EXPR : ASSIGN MINUS . IDs
	expr2 : MINUS . INTEGER

	INTEGER  shift 81
	ID  shift 23

	IDs  goto 82


state 57
	expr1 : LBRACKET . expr RBRACKET
	expr2 : LBRACKET . expr2 RBRACKET

	INTEGER  shift 55
	MINUS  shift 83
	LBRACKET  shift 57

	expr2  goto 84
	INTEGER_VAL  goto 85
	expr  goto 86
	expr1  goto 62


state 58
	TYPE_VAL : CHAR_VAL .  (61)

	.  reduce 61


59: shift-reduce conflict (shift 87, reduce 73) on MUL
59: shift-reduce conflict (shift 88, reduce 73) on DIV
state 59
	expr1 : expr2 . MUL expr2
	expr1 : expr2 .  (73)
	expr1 : expr2 . DIV expr2

	MUL  shift 87
	DIV  shift 88
	.  reduce 73


60: reduce-reduce conflict (reduce 60, reduce 74) on COMMA
60: reduce-reduce conflict (reduce 60, reduce 74) on SEMICOLON
state 60
	TYPE_VAL : INTEGER_VAL .  (60)
	expr2 : INTEGER_VAL .  (74)

	COMMA  reduce 60
	SEMICOLON  reduce 60
	.  reduce 74


state 61
	ASSIGN_EXPR : ASSIGN expr .  (58)

	.  reduce 58


62: shift-reduce conflict (shift 89, reduce 76) on PLUS
62: shift-reduce conflict (shift 90, reduce 76) on MINUS
62: reduce-reduce conflict (reduce 69, reduce 76) on COMMA
62: reduce-reduce conflict (reduce 69, reduce 76) on SEMICOLON
62: reduce-reduce conflict (reduce 69, reduce 76) on RBRACKET
state 62
	expr : expr1 . MINUS expr1
	expr : expr1 . PLUS expr1
	expr2 : expr1 .  (76)
	expr : expr1 .  (69)

	PLUS  shift 89
	MINUS  shift 90
	MUL  reduce 76
	DIV  reduce 76
	.  reduce 69


63: shift-reduce conflict (shift 39, reduce 66) on COMMA
state 63
	ASSIGN_EXPR : ASSIGN IDs . TERMINATE
	TERMINATE : .  (66)

	COMMA  shift 39
	.  reduce 66

	TERMINATE  goto 91


64: shift-reduce conflict (shift 39, reduce 66) on COMMA
state 64
	ASSIGN_EXPR : ASSIGN TYPE_VAL . TERMINATE
	TERMINATE : .  (66)

	COMMA  shift 39
	.  reduce 66

	TERMINATE  goto 92


state 65
	TERMINATE : COMMA IDLIST .  (65)

	.  reduce 65


66: reduce-reduce conflict (reduce 46, reduce 48) on RBRACE
state 66
	RELOOP : FOR_KEY LBRACKET FOR_EXPR RBRACKET LBRACE_EXPR . STATEMENT RBRACE_EXPR
	VAR_DECLARE : .  (48)
	STATEMENT : .  (46)

	INT  shift 2
	FLOAT  shift 3
	STRING  shift 4
	VOID  shift 5
	CHAR  shift 6
	.  reduce 46

	VAR_DECLARE  goto 31
	STATEMENT  goto 93
	TYPE  goto 17


state 67
	S_PART : COMMA . LOGICAL_OPERATION S_PART
	LOGICAL_OPERATION : .  (27)

	ID  shift 23
	.  reduce 27

	IDs  goto 33
	LOGICAL_OPERATION  goto 94


state 68
	SECOND_PART : LOGICAL_OPERATION S_PART .  (22)

	.  reduce 22


state 69
	S_PART : SEMICOLON_EXPR .  (25)

	.  reduce 25


state 70
	VALUE : INTEGER .  (37)

	.  reduce 37


state 71
	THIRD_PART : FALSE .  (34)

	.  reduce 34


state 72
	THIRD_PART : TRUE .  (33)

	.  reduce 33


state 73
	THIRD_PART : VALUE .  (35)

	.  reduce 35


state 74
	NORMAL_MATH_OPERATION : IDs . OPTION OTHER

	SADD  shift 95
	SSUB  shift 96
	PLUS_AND  shift 97
	MINUS_AND  shift 98

	OPTION  goto 99


state 75
	FOR_EXPR : FIRST_PART SECOND_PART THIRD_PART .  (19)

	.  reduce 19


state 76
	THIRD_PART : NORMAL_MATH_OPERATION .  (32)

	.  reduce 32


state 77
	RBRACE_EXPR : RBRACE ENDFLAG .  (12)

	.  reduce 12


state 78
	RELOOP : DO_KEY LBRACE_EXPR STATEMENT RBRACE_EXPR WHILE_KEY . LBRACKET LOGICAL_OPERATION RBRACKET SEMICOLON_EXPR

	LBRACKET  shift 100


state 79
	LOGICAL_OPERATION : IDs LOGICAL_OPTION VALUE .  (26)

	.  reduce 26


80: reduce-reduce conflict (reduce 46, reduce 48) on RBRACE
state 80
	RELOOP : WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET LBRACE_EXPR . STATEMENT RBRACE_EXPR
	VAR_DECLARE : .  (48)
	STATEMENT : .  (46)

	INT  shift 2
	FLOAT  shift 3
	STRING  shift 4
	VOID  shift 5
	CHAR  shift 6
	.  reduce 46

	VAR_DECLARE  goto 31
	STATEMENT  goto 101
	TYPE  goto 17


state 81
	expr2 : MINUS INTEGER .  (75)

	.  reduce 75


state 82
	ASSIGN_EXPR : ASSIGN MINUS IDs .  (59)

	.  reduce 59


state 83
	expr2 : MINUS . INTEGER

	INTEGER  shift 81


84: shift-reduce conflict (shift 87, reduce 73) on MUL
84: shift-reduce conflict (shift 88, reduce 73) on DIV
84: shift-reduce conflict (shift 102, reduce 73) on RBRACKET
state 84
	expr1 : expr2 . MUL expr2
	expr1 : expr2 .  (73)
	expr1 : expr2 . DIV expr2
	expr2 : LBRACKET expr2 . RBRACKET

	MUL  shift 87
	DIV  shift 88
	RBRACKET  shift 102
	.  reduce 73


state 85
	expr2 : INTEGER_VAL .  (74)

	.  reduce 74


state 86
	expr1 : LBRACKET expr . RBRACKET

	RBRACKET  shift 103


state 87
	expr1 : expr2 MUL . expr2

	INTEGER  shift 55
	MINUS  shift 83
	LBRACKET  shift 57

	expr2  goto 104
	INTEGER_VAL  goto 85
	expr1  goto 105


state 88
	expr1 : expr2 DIV . expr2

	INTEGER  shift 55
	MINUS  shift 83
	LBRACKET  shift 57

	expr2  goto 106
	INTEGER_VAL  goto 85
	expr1  goto 105


state 89
	expr : expr1 PLUS . expr1

	INTEGER  shift 55
	MINUS  shift 83
	LBRACKET  shift 57

	expr2  goto 59
	INTEGER_VAL  goto 85
	expr1  goto 107


state 90
	expr : expr1 MINUS . expr1

	INTEGER  shift 55
	MINUS  shift 83
	LBRACKET  shift 57

	expr2  goto 59
	INTEGER_VAL  goto 85
	expr1  goto 108


state 91
	ASSIGN_EXPR : ASSIGN IDs TERMINATE .  (57)

	.  reduce 57


state 92
	ASSIGN_EXPR : ASSIGN TYPE_VAL TERMINATE .  (56)

	.  reduce 56


state 93
	RELOOP : FOR_KEY LBRACKET FOR_EXPR RBRACKET LBRACE_EXPR STATEMENT . RBRACE_EXPR

	RBRACE  shift 44

	RBRACE_EXPR  goto 109


state 94
	S_PART : COMMA LOGICAL_OPERATION . S_PART

	COMMA  shift 67
	SEMICOLON  shift 35

	S_PART  goto 110
	SEMICOLON_EXPR  goto 69


state 95
	OPTION : SADD .  (41)

	.  reduce 41


state 96
	OPTION : SSUB .  (42)

	.  reduce 42


state 97
	OPTION : PLUS_AND . VALUE

	INTEGER  shift 70

	VALUE  goto 111


state 98
	OPTION : MINUS_AND . VALUE

	INTEGER  shift 70

	VALUE  goto 112


state 99
	NORMAL_MATH_OPERATION : IDs OPTION . OTHER
	OTHER : .  (40)

	COMMA  shift 113
	.  reduce 40

	OTHER  goto 114


state 100
	RELOOP : DO_KEY LBRACE_EXPR STATEMENT RBRACE_EXPR WHILE_KEY LBRACKET . LOGICAL_OPERATION RBRACKET SEMICOLON_EXPR
	LOGICAL_OPERATION : .  (27)

	ID  shift 23
	.  reduce 27

	IDs  goto 33
	LOGICAL_OPERATION  goto 115


state 101
	RELOOP : WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET LBRACE_EXPR STATEMENT . RBRACE_EXPR

	RBRACE  shift 44

	RBRACE_EXPR  goto 116


state 102
	expr2 : LBRACKET expr2 RBRACKET .  (77)

	.  reduce 77


state 103
	expr1 : LBRACKET expr RBRACKET .  (72)

	.  reduce 72


104: reduce-reduce conflict (reduce 70, reduce 73) on COMMA
104: reduce-reduce conflict (reduce 70, reduce 73) on SEMICOLON
104: reduce-reduce conflict (reduce 70, reduce 73) on PLUS
104: reduce-reduce conflict (reduce 70, reduce 73) on MINUS
104: reduce-reduce conflict (reduce 70, reduce 73) on MUL
104: reduce-reduce conflict (reduce 70, reduce 73) on DIV
104: reduce-reduce conflict (reduce 70, reduce 73) on RBRACKET
state 104
	expr1 : expr2 MUL expr2 .  (70)
	expr1 : expr2 . MUL expr2
	expr1 : expr2 .  (73)
	expr1 : expr2 . DIV expr2

	.  reduce 70


state 105
	expr2 : expr1 .  (76)

	.  reduce 76


106: shift-reduce conflict (shift 87, reduce 73) on MUL
106: shift-reduce conflict (shift 88, reduce 73) on DIV
106: reduce-reduce conflict (reduce 71, reduce 73) on COMMA
106: reduce-reduce conflict (reduce 71, reduce 73) on SEMICOLON
106: reduce-reduce conflict (reduce 71, reduce 73) on PLUS
106: reduce-reduce conflict (reduce 71, reduce 73) on MINUS
106: reduce-reduce conflict (reduce 71, reduce 73) on RBRACKET
state 106
	expr1 : expr2 . MUL expr2
	expr1 : expr2 .  (73)
	expr1 : expr2 DIV expr2 .  (71)
	expr1 : expr2 . DIV expr2

	.  reduce 71


107: reduce-reduce conflict (reduce 67, reduce 76) on COMMA
107: reduce-reduce conflict (reduce 67, reduce 76) on SEMICOLON
107: reduce-reduce conflict (reduce 67, reduce 76) on RBRACKET
state 107
	expr : expr1 PLUS expr1 .  (67)
	expr2 : expr1 .  (76)

	MUL  reduce 76
	DIV  reduce 76
	.  reduce 67


108: reduce-reduce conflict (reduce 68, reduce 76) on COMMA
108: reduce-reduce conflict (reduce 68, reduce 76) on SEMICOLON
108: reduce-reduce conflict (reduce 68, reduce 76) on RBRACKET
state 108
	expr : expr1 MINUS expr1 .  (68)
	expr2 : expr1 .  (76)

	MUL  reduce 76
	DIV  reduce 76
	.  reduce 68


state 109
	RELOOP : FOR_KEY LBRACKET FOR_EXPR RBRACKET LBRACE_EXPR STATEMENT RBRACE_EXPR .  (7)

	.  reduce 7


state 110
	S_PART : COMMA LOGICAL_OPERATION S_PART .  (24)

	.  reduce 24


state 111
	OPTION : PLUS_AND VALUE .  (43)

	.  reduce 43


state 112
	OPTION : MINUS_AND VALUE .  (44)

	.  reduce 44


state 113
	OTHER : COMMA . NORMAL_MATH_OPERATION

	ID  shift 23

	IDs  goto 74
	NORMAL_MATH_OPERATION  goto 117


state 114
	NORMAL_MATH_OPERATION : IDs OPTION OTHER .  (38)

	.  reduce 38


state 115
	RELOOP : DO_KEY LBRACE_EXPR STATEMENT RBRACE_EXPR WHILE_KEY LBRACKET LOGICAL_OPERATION . RBRACKET SEMICOLON_EXPR

	RBRACKET  shift 118


state 116
	RELOOP : WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET LBRACE_EXPR STATEMENT RBRACE_EXPR .  (8)

	.  reduce 8


state 117
	OTHER : COMMA NORMAL_MATH_OPERATION .  (39)

	.  reduce 39


state 118
	RELOOP : DO_KEY LBRACE_EXPR STATEMENT RBRACE_EXPR WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET . SEMICOLON_EXPR

	SEMICOLON  shift 35

	SEMICOLON_EXPR  goto 119


state 119
	RELOOP : DO_KEY LBRACE_EXPR STATEMENT RBRACE_EXPR WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET SEMICOLON_EXPR .  (9)

	.  reduce 9


Rules never reduced
	Program :  (6)


##############################################################################
# Summary
##############################################################################

State 1 contains 2 shift-reduce conflict(s)
State 18 contains 7 reduce-reduce conflict(s)
State 20 contains 1 reduce-reduce conflict(s)
State 26 contains 1 shift-reduce conflict(s)
State 29 contains 1 shift-reduce conflict(s)
State 35 contains 1 shift-reduce conflict(s)
State 44 contains 1 shift-reduce conflict(s)
State 59 contains 2 shift-reduce conflict(s)
State 60 contains 2 reduce-reduce conflict(s)
State 62 contains 2 shift-reduce conflict(s)
State 62 contains 3 reduce-reduce conflict(s)
State 63 contains 1 shift-reduce conflict(s)
State 64 contains 1 shift-reduce conflict(s)
State 66 contains 1 reduce-reduce conflict(s)
State 80 contains 1 reduce-reduce conflict(s)
State 84 contains 3 shift-reduce conflict(s)
State 104 contains 7 reduce-reduce conflict(s)
State 106 contains 2 shift-reduce conflict(s)
State 106 contains 5 reduce-reduce conflict(s)
State 107 contains 3 reduce-reduce conflict(s)
State 108 contains 3 reduce-reduce conflict(s)


37 token(s), 34 nonterminal(s)
78 grammar rule(s), 120 state(s)


##############################################################################
# End of File
##############################################################################
