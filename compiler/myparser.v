#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 43 of your 30 day trial period.
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
# Date: 11/10/17
# Time: 16:23:45
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : start $end

    1  start : start expr ENDFLAG
    2        | start ENDFLAG
    3        |

    4  expr : expr1 PLUS expr1
    5       | expr1 MINUS expr1
    6       | expr1

    7  expr1 : expr1 MUL expr1
    8        | expr1 DIV expr1
    9        | LBRACKET expr RBRACKET
   10        | MINUS expr1
   11        | SSUB expr1
   12        | SADD expr1
   13        | expr1 POW expr1
   14        | INTEGER
   15        | FLOAT


##############################################################################
# States
##############################################################################

state 0
	$accept : . start $end
	start : .  (3)

	.  reduce 3

	start  goto 1


state 1
	$accept : start . $end  (0)
	start : start . expr ENDFLAG
	start : start . ENDFLAG

	$end  accept
	FLOAT  shift 2
	INTEGER  shift 3
	MINUS  shift 4
	SADD  shift 5
	SSUB  shift 6
	LBRACKET  shift 7
	ENDFLAG  shift 8

	expr  goto 9
	expr1  goto 10


state 2
	expr1 : FLOAT .  (15)

	.  reduce 15


state 3
	expr1 : INTEGER .  (14)

	.  reduce 14


state 4
	expr1 : MINUS . expr1

	FLOAT  shift 2
	INTEGER  shift 3
	MINUS  shift 4
	SADD  shift 5
	SSUB  shift 6
	LBRACKET  shift 7

	expr1  goto 11


state 5
	expr1 : SADD . expr1

	FLOAT  shift 2
	INTEGER  shift 3
	MINUS  shift 4
	SADD  shift 5
	SSUB  shift 6
	LBRACKET  shift 7

	expr1  goto 12


state 6
	expr1 : SSUB . expr1

	FLOAT  shift 2
	INTEGER  shift 3
	MINUS  shift 4
	SADD  shift 5
	SSUB  shift 6
	LBRACKET  shift 7

	expr1  goto 13


state 7
	expr1 : LBRACKET . expr RBRACKET

	FLOAT  shift 2
	INTEGER  shift 3
	MINUS  shift 4
	SADD  shift 5
	SSUB  shift 6
	LBRACKET  shift 7

	expr  goto 14
	expr1  goto 10


state 8
	start : start ENDFLAG .  (2)

	.  reduce 2


state 9
	start : start expr . ENDFLAG

	ENDFLAG  shift 15


state 10
	expr : expr1 . PLUS expr1
	expr : expr1 . MINUS expr1
	expr : expr1 .  (6)
	expr1 : expr1 . MUL expr1
	expr1 : expr1 . DIV expr1
	expr1 : expr1 . POW expr1

	PLUS  shift 16
	MINUS  shift 17
	MUL  shift 18
	DIV  shift 19
	POW  shift 20
	.  reduce 6


11: shift-reduce conflict (shift 20, reduce 10) on POW
state 11
	expr1 : expr1 . MUL expr1
	expr1 : expr1 . DIV expr1
	expr1 : MINUS expr1 .  (10)
	expr1 : expr1 . POW expr1

	POW  shift 20
	.  reduce 10


12: shift-reduce conflict (shift 18, reduce 12) on MUL
12: shift-reduce conflict (shift 19, reduce 12) on DIV
12: shift-reduce conflict (shift 20, reduce 12) on POW
state 12
	expr1 : expr1 . MUL expr1
	expr1 : expr1 . DIV expr1
	expr1 : SADD expr1 .  (12)
	expr1 : expr1 . POW expr1

	MUL  shift 18
	DIV  shift 19
	POW  shift 20
	.  reduce 12


13: shift-reduce conflict (shift 18, reduce 11) on MUL
13: shift-reduce conflict (shift 19, reduce 11) on DIV
13: shift-reduce conflict (shift 20, reduce 11) on POW
state 13
	expr1 : expr1 . MUL expr1
	expr1 : expr1 . DIV expr1
	expr1 : SSUB expr1 .  (11)
	expr1 : expr1 . POW expr1

	MUL  shift 18
	DIV  shift 19
	POW  shift 20
	.  reduce 11


state 14
	expr1 : LBRACKET expr . RBRACKET

	RBRACKET  shift 21


state 15
	start : start expr ENDFLAG .  (1)

	.  reduce 1


state 16
	expr : expr1 PLUS . expr1

	FLOAT  shift 2
	INTEGER  shift 3
	MINUS  shift 4
	SADD  shift 5
	SSUB  shift 6
	LBRACKET  shift 7

	expr1  goto 22


state 17
	expr : expr1 MINUS . expr1

	FLOAT  shift 2
	INTEGER  shift 3
	MINUS  shift 4
	SADD  shift 5
	SSUB  shift 6
	LBRACKET  shift 7

	expr1  goto 23


state 18
	expr1 : expr1 MUL . expr1

	FLOAT  shift 2
	INTEGER  shift 3
	MINUS  shift 4
	SADD  shift 5
	SSUB  shift 6
	LBRACKET  shift 7

	expr1  goto 24


state 19
	expr1 : expr1 DIV . expr1

	FLOAT  shift 2
	INTEGER  shift 3
	MINUS  shift 4
	SADD  shift 5
	SSUB  shift 6
	LBRACKET  shift 7

	expr1  goto 25


state 20
	expr1 : expr1 POW . expr1

	FLOAT  shift 2
	INTEGER  shift 3
	MINUS  shift 4
	SADD  shift 5
	SSUB  shift 6
	LBRACKET  shift 7

	expr1  goto 26


state 21
	expr1 : LBRACKET expr RBRACKET .  (9)

	.  reduce 9


state 22
	expr : expr1 PLUS expr1 .  (4)
	expr1 : expr1 . MUL expr1
	expr1 : expr1 . DIV expr1
	expr1 : expr1 . POW expr1

	MUL  shift 18
	DIV  shift 19
	POW  shift 20
	.  reduce 4


state 23
	expr : expr1 MINUS expr1 .  (5)
	expr1 : expr1 . MUL expr1
	expr1 : expr1 . DIV expr1
	expr1 : expr1 . POW expr1

	MUL  shift 18
	DIV  shift 19
	POW  shift 20
	.  reduce 5


24: shift-reduce conflict (shift 20, reduce 7) on POW
state 24
	expr1 : expr1 MUL expr1 .  (7)
	expr1 : expr1 . MUL expr1
	expr1 : expr1 . DIV expr1
	expr1 : expr1 . POW expr1

	POW  shift 20
	.  reduce 7


25: shift-reduce conflict (shift 20, reduce 8) on POW
state 25
	expr1 : expr1 . MUL expr1
	expr1 : expr1 DIV expr1 .  (8)
	expr1 : expr1 . DIV expr1
	expr1 : expr1 . POW expr1

	POW  shift 20
	.  reduce 8


26: shift-reduce conflict (shift 18, reduce 13) on MUL
26: shift-reduce conflict (shift 19, reduce 13) on DIV
26: shift-reduce conflict (shift 20, reduce 13) on POW
state 26
	expr1 : expr1 . MUL expr1
	expr1 : expr1 . DIV expr1
	expr1 : expr1 POW expr1 .  (13)
	expr1 : expr1 . POW expr1

	MUL  shift 18
	DIV  shift 19
	POW  shift 20
	.  reduce 13


##############################################################################
# Summary
##############################################################################

State 11 contains 1 shift-reduce conflict(s)
State 12 contains 3 shift-reduce conflict(s)
State 13 contains 3 shift-reduce conflict(s)
State 24 contains 1 shift-reduce conflict(s)
State 25 contains 1 shift-reduce conflict(s)
State 26 contains 3 shift-reduce conflict(s)


15 token(s), 4 nonterminal(s)
16 grammar rule(s), 27 state(s)


##############################################################################
# End of File
##############################################################################
