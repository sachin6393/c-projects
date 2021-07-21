SLR PARSER
SLR (1) refers to simple LR Parsing. 
The SLR parser is similar to LR(0) parser except that the reduced entry.
The reduced productions are written only in the FOLLOW of the variable whose production is reduced.

#Various steps involved in the SLR (1) Parsing:

1.For the given input string write a context free grammar
2.Check the ambiguity of the grammar
3.Add Augment production in the given grammar
4.Create Canonical collection of LR (0) items
5.Construct a SLR (1) parsing table
