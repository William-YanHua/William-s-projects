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
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 11/10/17
# Time: 16:18:17
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  "bool"

    2  "int"

    3  "char"

    4  "string"

    5  "doule"|"float"

    6  "void"

    7  "if"

    8  "else"

    9  "while"

   10  "for"

   11  "do"

   12  "+"

   13  "-"

   14  "*"

   15  "/"

   16  "^"

   17  "**"

   18  "=="

   19  "++"

   20  "--"

   21  "||"

   22  "&&"

   23  "!"

   24  "="

   25  "{"

   26  "}"

   27  "("

   28  ")"

   29  ":"

   30  "->"

   31  "&"

   32  \'|\"

   33  ","

   34  ";"

   35  [\t ]+

   36  \"[^\"]*?\"|'[^']*?'

   37  [1-9]?[0-9]+

   38  [1-9]?[0-9]+\.?[0-9]*

   39  [1-9]?[0-9]+\.?[0-9]*((E|e)[+-]?[1-9]?[0-9]+\.?[0-9]*)?

   40  (_|[a-zA-Z])?[A-Za-z_0-9]+

   41  \n


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x21               goto 5
	0x22               goto 6
	0x26               goto 7
	0x27               goto 8
	0x28               goto 9
	0x29               goto 10
	0x2a               goto 11
	0x2b               goto 12
	0x2c               goto 13
	0x2d               goto 14
	0x2f               goto 15
	0x30               goto 16
	0x31 - 0x39 (9)    goto 16
	0x3a               goto 17
	0x3b               goto 18
	0x3d               goto 19
	0x41 - 0x5a (26)   goto 20
	0x5e               goto 21
	0x5f               goto 20
	0x61               goto 20
	0x62               goto 22
	0x63               goto 23
	0x64               goto 24
	0x65               goto 25
	0x66               goto 26
	0x67 - 0x68 (2)    goto 20
	0x69               goto 27
	0x6a - 0x72 (9)    goto 20
	0x73               goto 28
	0x74 - 0x75 (2)    goto 20
	0x76               goto 29
	0x77               goto 30
	0x78 - 0x7a (3)    goto 20
	0x7b               goto 31
	0x7c               goto 32
	0x7d               goto 33


state 2
	^INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x21               goto 5
	0x22               goto 6
	0x26               goto 7
	0x27               goto 8
	0x28               goto 9
	0x29               goto 10
	0x2a               goto 11
	0x2b               goto 12
	0x2c               goto 13
	0x2d               goto 14
	0x2f               goto 15
	0x30               goto 16
	0x31 - 0x39 (9)    goto 16
	0x3a               goto 17
	0x3b               goto 18
	0x3d               goto 19
	0x41 - 0x5a (26)   goto 20
	0x5e               goto 21
	0x5f               goto 20
	0x61               goto 20
	0x62               goto 22
	0x63               goto 23
	0x64               goto 24
	0x65               goto 25
	0x66               goto 26
	0x67 - 0x68 (2)    goto 20
	0x69               goto 27
	0x6a - 0x72 (9)    goto 20
	0x73               goto 28
	0x74 - 0x75 (2)    goto 20
	0x76               goto 29
	0x77               goto 30
	0x78 - 0x7a (3)    goto 20
	0x7b               goto 31
	0x7c               goto 32
	0x7d               goto 33


state 3
	0x09               goto 3
	0x20               goto 3

	match 35


state 4
	match 41


state 5
	match 23


state 6
	0x00 - 0x21 (34)   goto 34
	0x22               goto 35
	0x23 - 0xff (221)  goto 34

	match 32


state 7
	0x26               goto 36

	match 31


state 8
	0x00 - 0x26 (39)   goto 37
	0x27               goto 35
	0x28 - 0xff (216)  goto 37

	match 32


state 9
	match 27


state 10
	match 28


state 11
	0x2a               goto 38

	match 14


state 12
	0x2b               goto 39

	match 12


state 13
	match 33


state 14
	0x2d               goto 40
	0x3e               goto 41

	match 13


state 15
	match 15


state 16
	0x2e               goto 42
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x44 (4)    goto 20
	0x45               goto 43
	0x46 - 0x5a (21)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 43
	0x66 - 0x7a (21)   goto 20

	match 37


state 17
	match 29


state 18
	match 34


state 19
	0x3d               goto 44

	match 24


state 20
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 40


state 21
	match 16


state 22
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 45
	0x70 - 0x7a (11)   goto 20

	match 40


state 23
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x67 (7)    goto 20
	0x68               goto 46
	0x69 - 0x7a (18)   goto 20

	match 40


state 24
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 47
	0x70 - 0x7a (11)   goto 20

	match 40


state 25
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6b (11)   goto 20
	0x6c               goto 48
	0x6d - 0x7a (14)   goto 20

	match 40


state 26
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6b (11)   goto 20
	0x6c               goto 49
	0x6d - 0x6e (2)    goto 20
	0x6f               goto 50
	0x70 - 0x7a (11)   goto 20

	match 40


state 27
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x65 (5)    goto 20
	0x66               goto 51
	0x67 - 0x6d (7)    goto 20
	0x6e               goto 52
	0x6f - 0x7a (12)   goto 20

	match 40


state 28
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x73 (19)   goto 20
	0x74               goto 53
	0x75 - 0x7a (6)    goto 20

	match 40


state 29
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 54
	0x70 - 0x7a (11)   goto 20

	match 40


state 30
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x67 (7)    goto 20
	0x68               goto 55
	0x69 - 0x7a (18)   goto 20

	match 40


state 31
	match 25


state 32
	0x7c               goto 56


state 33
	match 26


state 34
	0x00 - 0x21 (34)   goto 34
	0x22               goto 35
	0x23 - 0xff (221)  goto 34


state 35
	match 36


state 36
	match 22


state 37
	0x00 - 0x26 (39)   goto 37
	0x27               goto 35
	0x28 - 0xff (216)  goto 37


state 38
	match 17


state 39
	match 19


state 40
	match 20


state 41
	match 30


state 42
	0x30 - 0x39 (10)   goto 42
	0x45               goto 57
	0x65               goto 57

	match 38


state 43
	0x2b               goto 58
	0x2d               goto 58
	0x30               goto 59
	0x31 - 0x39 (9)    goto 59
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 40


state 44
	match 18


state 45
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 60
	0x70 - 0x7a (11)   goto 20

	match 40


state 46
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61               goto 61
	0x62 - 0x7a (25)   goto 20

	match 40


state 47
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x74 (20)   goto 20
	0x75               goto 62
	0x76 - 0x7a (5)    goto 20

	match 11


state 48
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x72 (18)   goto 20
	0x73               goto 63
	0x74 - 0x7a (7)    goto 20

	match 40


state 49
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 64
	0x70 - 0x7a (11)   goto 20

	match 40


state 50
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x71 (17)   goto 20
	0x72               goto 65
	0x73 - 0x7a (8)    goto 20

	match 40


state 51
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 7


state 52
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x73 (19)   goto 20
	0x74               goto 66
	0x75 - 0x7a (6)    goto 20

	match 40


state 53
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x71 (17)   goto 20
	0x72               goto 67
	0x73 - 0x7a (8)    goto 20

	match 40


state 54
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x68 (8)    goto 20
	0x69               goto 68
	0x6a - 0x7a (17)   goto 20

	match 40


state 55
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x68 (8)    goto 20
	0x69               goto 69
	0x6a - 0x7a (17)   goto 20

	match 40


state 56
	match 21


state 57
	0x2b               goto 58
	0x2d               goto 58
	0x30               goto 70
	0x31 - 0x39 (9)    goto 70


state 58
	0x30               goto 70
	0x31 - 0x39 (9)    goto 70


state 59
	0x2e               goto 71
	0x30 - 0x39 (10)   goto 59
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 39


state 60
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6b (11)   goto 20
	0x6c               goto 72
	0x6d - 0x7a (14)   goto 20

	match 40


state 61
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x71 (17)   goto 20
	0x72               goto 73
	0x73 - 0x7a (8)    goto 20

	match 40


state 62
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6b (11)   goto 20
	0x6c               goto 74
	0x6d - 0x7a (14)   goto 20

	match 40


state 63
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 75
	0x66 - 0x7a (21)   goto 20

	match 40


state 64
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61               goto 76
	0x62 - 0x7a (25)   goto 20

	match 40


state 65
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 10


state 66
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 2


state 67
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x68 (8)    goto 20
	0x69               goto 77
	0x6a - 0x7a (17)   goto 20

	match 40


state 68
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x63 (3)    goto 20
	0x64               goto 78
	0x65 - 0x7a (22)   goto 20

	match 40


state 69
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6b (11)   goto 20
	0x6c               goto 79
	0x6d - 0x7a (14)   goto 20

	match 40


state 70
	0x2e               goto 71
	0x30 - 0x39 (10)   goto 70

	match 39


state 71
	0x30 - 0x39 (10)   goto 71

	match 39


state 72
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 1


state 73
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 3


state 74
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 80
	0x66 - 0x7a (21)   goto 20

	match 40


state 75
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 8


state 76
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x73 (19)   goto 20
	0x74               goto 80
	0x75 - 0x7a (6)    goto 20

	match 40


state 77
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6d (13)   goto 20
	0x6e               goto 81
	0x6f - 0x7a (12)   goto 20

	match 40


state 78
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 6


state 79
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 82
	0x66 - 0x7a (21)   goto 20

	match 40


state 80
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 5


state 81
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x66 (6)    goto 20
	0x67               goto 83
	0x68 - 0x7a (19)   goto 20

	match 40


state 82
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 9


state 83
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 4


#############################################################################
# Summary
#############################################################################

1 start state(s)
41 expression(s), 83 state(s)


#############################################################################
# End of File
#############################################################################
