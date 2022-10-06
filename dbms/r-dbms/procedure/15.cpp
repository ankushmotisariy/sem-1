create procedure myprocedure()
BEGIN
         DECLARE I INT;
          SET I=10;
          SELECT I;
ENd#
===============================
mysql>  create procedure myprocedure()
    -> BEGIN
    ->          DECLARE I INT;
    ->           SET I=10;
    ->           SELECT I;
    -> ENd#
Query OK, 0 rows affected (0.00 sec)
============================
     out put
=============================
mysql> 
mysql>  CALL myprocedure#
+------+
| I    |
+------+
|   10 |
+------+
1 row in set (0.00 sec)
=================================================
create procedure myprocedure()
BEGIN
         DECLARE I INT;
         DECLARE J INT; 
          SET I=10;
          SET J=32; 
          SELECT I;
          SELECT J; 
ENd#
 ============================
     out put
=============================
ysql>  call myprocedure#
+------+
| I    |
+------+
|   10 |
+------+
1 row in set (0.00 sec)

+------+
| J    |
+------+
|   32 |
+------+
1 row in set (0.00 sec)


 ==============================================

create procedure Aprocedure()
 BEGIN
         DECLARE I INT;
         DECLARE J INT;
         DECLARE O INT;  
          SET I=10;
          SET J=32;
          SET O=36;  
          SELECT I;
          SELECT J;
          SELECT O; 
ENd#
============================
     out put
=============================

Query OK, 0 rows affected (0.01 sec)

mysql> CALL Aprocedure#
+------+
| I    |
+------+
|   10 |
+------+
1 row in set (0.00 sec)

+------+
| J    |
+------+
|   32 |
+------+
1 row in set (0.00 sec)

+------+
| O    |
+------+
|   36 |
+------+
1 row in set (0.00 sec)

Query OK, 0 rows affected (0.00 sec)

mysql> 
=========================================
create procedure Sp_Add() (sarvalo)
BEGIN
	DECLARE a , b , sum int;
	SET a = 30 , b = 40;
 	SET sum = a + b;
	select sum as Sum_Of_Num ;
END #
============================
     out put
=============================
mysql> call sp_add#
+------------+
| Sum_Of_Num |
+------------+
|         70 |
+------------+
1 row in set (0.00 sec)
================================================
create procedure Sa_Add() (badbaki)
BEGIN
	DECLARE a , b , sub int;
	SET a = 100 , b = 40;
 	SET sub = a - b;
	select sub as Sub_Of_Num ;
END #
============================
     out put
=============================

Query OK, 0 rows affected (0.00 sec)

mysql> call sa_add#
+------------+
| Sub_Of_Num |
+------------+
|         60 |
+------------+
1 row in set (0.00 sec) 

Query OK, 0 rows affected (0.00 sec)
=============================================
create procedure Sm_Add()  (gunakar)                          
BEGIN
	DECLARE a , b , mul int;
	SET a = 40 , b = 20;
 	SET mul = a * b;
	select mul as mul_Of_Num ;
END #
=====================================
        out put
====================================
mysql> call sm_add#
+------------+
| mul_Of_Num |
+------------+
|        800 |
+------------+
1 row in set (0.00 sec)

Query OK, 0 rows affected (0.00 sec)
==============================================
   create procedure Sd_Add()                           
BEGIN
	DECLARE a , b , c int;
	SET a = 100 , b = 50;
 	SET c = a / b;
	select c as mul_Of_Num ;
END # 

=====================================
        out put
==================================== 
Query OK, 0 rows affected (0.00 sec) (BHAKAKAR)

mysql> call sd_ADD#
+------------+
| mul_Of_Num |
+------------+
|          2 |
+------------+
1 row in set (0.00 sec)
=======================================
 create procedure Su_Add()  (point value)                         
BEGIN
	DECLARE a , b , c float;
	SET a = 10 , b = 3;
 	SET c = a / b;
	select c as mul_Of_Num ;
END #
==========================================

                  out put
============================================
Query OK, 0 rows affected (0.00 sec)

mysql> call su_add#
+------------+
| mul_Of_Num |
+------------+
|    3.33333 |
+------------+
1 row in set (0.00 sec)

===============================================

 create procedure Smo_Add()     (taka)                      
BEGIN
	DECLARE a , b , c float;
	SET a = 15 , b = 2;
 	SET c = a % b;
	select c as mul_Of_Num ;
END # 
====================================

                 out put
====================================

Query OK, 0 rows affected (0.00 sec)

mysql> call smo_add#
+------------+
| mul_Of_Num |
+------------+
|          1 |
+------------+
1 row in set 
==============================================

    


