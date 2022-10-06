create table stu
(
 student_id int primary key,
 student_name char(10),
 student_city char(20),
 student_address char(100),
 student_gender char(6),
 student_blood_grop char(3),
 student_sem int,
 student_date_of_birth date,
 student_lan_number bigint,
 student_mobile_number bigint
);
 
insert into stu
values(101,'ankush','surat','yogichowk','male','a',1,'2003-11-9',7567920122,9328510006);
insert into stu
values(102,'fiza','gindinger','hirabag','female','b',2,'2003-11-8',7567920121,8849048885);
insert into stu
values(103,'daksh','amaril','pachtalavda','male','a+',3,'2005-10-9',7567920145,9934578925);
insert into stu
values(104,'kano','surat','jamangh','male','b',5,'2005-10-8',7566620145,7983457892);
insert into stu
values(105,'purvi','surat','chopati','female','a+',3,'2007-12-9',8867920145,9955578925);
insert into stu
values(106,'om','surat','katrgam','male','a+',3,'2008-10-9',7568020145,9939578925);
insert into stu
values(107,'ab','rajot','gardanchowk','male','a',5,'2009-5-9',7567928145,9934578929);
insert into stu
values(108,'mayur','amaril','pansada','male','a+',6,'2000-10-8',7577920144,8834578925);
insert into stu
values(109,'priya','navsari','maliba','female','a+',4,'2000-12-8',7500920144,8800578925);
insert into stu
values(110,'damo','navsari','ho','male','a+',1,'2004-10-8',7577820144,8834578925);


======================================================================
        update
======================================================================
mysql> create table stu
    -> (
    ->  student_id int primary key,
    ->  student_name char(10),
    ->  student_city char(20),
    ->  student_address char(100),
    ->  student_gender char(6),
    ->  student_blood_grop char(3),
    ->  student_sem int,
    ->  student_date_of_birth date,
    ->  student_lan_number bigint,
    ->  student_mobile_number bigint
    -> );
Query OK, 0 rows affected (0.34 sec)

mysql> desc stu;
+-----------------------+------------+------+-----+---------+-------+
| Field                 | Type       | Null | Key | Default | Extra |
+-----------------------+------------+------+-----+---------+-------+
| student_id            | int(11)    | NO   | PRI | NULL    |       |
| student_name          | char(10)   | YES  |     | NULL    |       |
| student_city          | char(20)   | YES  |     | NULL    |       |
| student_address       | char(100)  | YES  |     | NULL    |       |
| student_gender        | char(6)    | YES  |     | NULL    |       |
| student_blood_grop    | char(3)    | YES  |     | NULL    |       |
| student_sem           | int(11)    | YES  |     | NULL    |       |
| student_date_of_birth | date       | YES  |     | NULL    |       |
| student_lan_number    | bigint(20) | YES  |     | NULL    |       |
| student_mobile_number | bigint(20) | YES  |     | NULL    |       |
+-----------------------+------------+------+-----+---------+-------+
10 rows in set (0.00 sec)

mysql> insert into stu
    -> values(101,'ankush','surat','yogichowk','male','a',1,'2003-11-9',7567920122,9328510006);
Query OK, 1 row affected (0.07 sec)

mysql> insert into stu
    -> values(102,'fiza','gindinger','hirabag','female','b',2,'2003-11-8',7567920121,8849048885);
Query OK, 1 row affected (0.06 sec)

mysql> insert into stu
    -> values(103,'daksh','amaril','pachtalavda','male','a+',3,'2005-10-9',7567920145,9934578925);
Query OK, 1 row affected (0.12 sec)

mysql> insert into stu
    -> values(104,'kano','surat','jamangh','male','b',5,'2005-10-8',7566620145,7983457892);
Query OK, 1 row affected (0.12 sec)

mysql> insert into stu
    -> values(105,'purvi','surat','chopati','female','a+',3,'2007-12-9',8867920145,9955578925);
Query OK, 1 row affected (0.06 sec)

mysql> insert into stu
    -> values(106,'om','surat','katrgam','male','a+',3,'2008-10-9',7568020145,9939578925);
Query OK, 1 row affected (0.06 sec)

mysql> insert into stu
    -> values(107,'ab','rajot','gardanchowk','male','a',5,'2009-5-9',7567928145,9934578929);
Query OK, 1 row affected (0.06 sec)

mysql> insert into stu
    -> values(108,'mayur','amaril','pansada','male','a+',6,'2000-10-8',7577920144,8834578925);
Query OK, 1 row affected (0.06 sec)

mysql> insert into stu
    -> values(109,'priya','navsari','maliba','female','a+',4,'2000-12-8',7500920144,8800578925);
Query OK, 1 row affected (0.06 sec)

mysql> insert into stu
    -> values(110,'damo','navsari','ho','male','a+',1,'2004-10-8',7577820144,8834578925);
Query OK, 1 row affected (0.06 sec)

mysql> 
mysql> select * from stu;
+------------+--------------+--------------+-----------------+----------------+--------------------+-------------+-----------------------+--------------------+-----------------------+
| student_id | student_name | student_city | student_address | student_gender | student_blood_grop | student_sem | student_date_of_birth | student_lan_number | student_mobile_number |
+------------+--------------+--------------+-----------------+----------------+--------------------+-------------+-----------------------+--------------------+-----------------------+
|        101 | ankush       | surat        | yogichowk       | male           | a                  |           1 | 2003-11-09            |         7567920122 |            9328510006 |
|        102 | fiza         | gindinger    | hirabag         | female         | b                  |           2 | 2003-11-08            |         7567920121 |            8849048885 |
|        103 | daksh        | amaril       | pachtalavda     | male           | a+                 |           3 | 2005-10-09            |         7567920145 |            9934578925 |
|        104 | kano         | surat        | jamangh         | male           | b                  |           5 | 2005-10-08            |         7566620145 |            7983457892 |
|        105 | purvi        | surat        | chopati         | female         | a+                 |           3 | 2007-12-09            |         8867920145 |            9955578925 |
|        106 | om           | surat        | katrgam         | male           | a+                 |           3 | 2008-10-09            |         7568020145 |            9939578925 |
|        107 | ab           | rajot        | gardanchowk     | male           | a                  |           5 | 2009-05-09            |         7567928145 |            9934578929 |
|        108 | mayur        | amaril       | pansada         | male           | a+                 |           6 | 2000-10-08            |         7577920144 |            8834578925 |
|        109 | priya        | navsari      | maliba          | female         | a+                 |           4 | 2000-12-08            |         7500920144 |            8800578925 |
|        110 | damo         | navsari      | ho              | male           | a+                 |           1 | 2004-10-08            |         7577820144 |            8834578925 |
+------------+--------------+--------------+-----------------+----------------+--------------------+-------------+-----------------------+--------------------+-----------------------+
10 rows in set (0.00 sec)
---------------------------------------------------------------------
      upadate name change karva
----------------------------------------------------------------------
mysql>  update stu set student_name='happy' where student_id=109;
Query OK, 1 row affected (0.05 sec)
Rows matched: 1  Changed: 1  Warnings: 0

mysql> select * from stu;
+------------+--------------+--------------+-----------------+----------------+--------------------+-------------+-----------------------+--------------------+-----------------------+
| student_id | student_name | student_city | student_address | student_gender | student_blood_grop | student_sem | student_date_of_birth | student_lan_number | student_mobile_number |
+------------+--------------+--------------+-----------------+----------------+--------------------+-------------+-----------------------+--------------------+-----------------------+
|        101 | ankush       | surat        | yogichowk       | male           | a                  |           1 | 2003-11-09            |         7567920122 |            9328510006 |
|        102 | fiza         | gindinger    | hirabag         | female         | b                  |           2 | 2003-11-08            |         7567920121 |            8849048885 |
|        103 | daksh        | amaril       | pachtalavda     | male           | a+                 |           3 | 2005-10-09            |         7567920145 |            9934578925 |
|        104 | kano         | surat        | jamangh         | male           | b                  |           5 | 2005-10-08            |         7566620145 |            7983457892 |
|        105 | purvi        | surat        | chopati         | female         | a+                 |           3 | 2007-12-09            |         8867920145 |            9955578925 |
|        106 | om           | surat        | katrgam         | male           | a+                 |           3 | 2008-10-09            |         7568020145 |            9939578925 |
|        107 | ab           | rajot        | gardanchowk     | male           | a                  |           5 | 2009-05-09            |         7567928145 |            9934578929 |
|        108 | mayur        | amaril       | pansada         | male           | a+                 |           6 | 2000-10-08            |         7577920144 |            8834578925 |
|        109 | happy        | navsari      | maliba          | female         | a+                 |           4 | 2000-12-08            |         7500920144 |            8800578925 |
|        110 | damo         | navsari      | ho              | male           | a+                 |           1 | 2004-10-08            |         7577820144 |            8834578925 |
+------------+--------------+--------------+-----------------+----------------+--------------------+-------------+-----------------------+--------------------+-----------------------+
10 rows in set (0.00 sec)

mysql> 
======================================================================================

     sem chang karava
===================================================================================
update stu set student_sem='5' where student_id=101;
Query OK, 1 row affected (0.07 sec)
Rows matched: 1  Changed: 1  Warnings: 0

mysql> select * from stu;
+------------+--------------+--------------+-----------------+----------------+--------------------+-------------+-----------------------+--------------------+-----------------------+
| student_id | student_name | student_city | student_address | student_gender | student_blood_grop | student_sem | student_date_of_birth | student_lan_number | student_mobile_number |
+------------+--------------+--------------+-----------------+----------------+--------------------+-------------+-----------------------+--------------------+-----------------------+
|        101 | ankush       | surat        | yogichowk       | male           | a                  |           5 | 2003-11-09            |         7567920122 |            9328510006 |
|        102 | fiza         | gindinger    | hirabag         | female         | b                  |           2 | 2003-11-08            |         7567920121 |            8849048885 |
|        103 | daksh        | amaril       | pachtalavda     | male           | a+                 |           3 | 2005-10-09            |         7567920145 |            9934578925 |
|        104 | kano         | surat        | jamangh         | male           | b                  |           5 | 2005-10-08            |         7566620145 |            7983457892 |
|        105 | purvi        | surat        | chopati         | female         | a+                 |           3 | 2007-12-09            |         8867920145 |            9955578925 |
|        106 | om           | surat        | katrgam         | male           | a+                 |           3 | 2008-10-09            |         7568020145 |            9939578925 |
|        107 | ab           | rajot        | gardanchowk     | male           | a                  |           5 | 2009-05-09            |         7567928145 |            9934578929 |
|        108 | mayur        | amaril       | pansada         | male           | a+                 |           6 | 2000-10-08            |         7577920144 |            8834578925 |
|        109 | happy        | navsari      | maliba          | female         | a+                 |           4 | 2000-12-08            |         7500920144 |            8800578925 |
|        110 | damo         | navsari      | ho              | male           | a+                 |           1 | 2004-10-08            |         7577820144 |            8834578925 |
+------------+--------------+--------------+-----------------+----------------+--------------------+-------------+-----------------------+--------------------+-----------------------+
10 rows in set (0.00 sec)

mysql> 

=================================================================================
    surat thi katal jova
===============================================================================
mysql> select * from stu where student_city='surat';
+------------+--------------+--------------+-----------------+----------------+--------------------+-------------+-----------------------+--------------------+-----------------------+
| student_id | student_name | student_city | student_address | student_gender | student_blood_grop | student_sem | student_date_of_birth | student_lan_number | student_mobile_number |
+------------+--------------+--------------+-----------------+----------------+--------------------+-------------+-----------------------+--------------------+-----------------------+
|        101 | ankush       | surat        | yogichowk       | male           | a                  |           5 | 2003-11-09            |         7567920122 |            9328510006 |
|        104 | kano         | surat        | jamangh         | male           | b                  |           5 | 2005-10-08            |         7566620145 |            7983457892 |
|        105 | purvi        | surat        | chopati         | female         | a+                 |           3 | 2007-12-09            |         8867920145 |            9955578925 |
|        106 | om           | surat        | katrgam         | male           | a+                 |           3 | 2008-10-09            |         7568020145 |            9939578925 |
+------------+--------------+--------------+-----------------+----------------+--------------------+-------------+-----------------------+--------------------+-----------------------+
4 rows in set (0.00 sec)

mysql> =================================================================================================

      surat and navsri jova mate
================================================================
mysql> select * from stu where student_city in('surat','navsari');
+------------+--------------+--------------+-----------------+----------------+--------------------+-------------+-----------------------+--------------------+-----------------------+
| student_id | student_name | student_city | student_address | student_gender | student_blood_grop | student_sem | student_date_of_birth | student_lan_number | student_mobile_number |
+------------+--------------+--------------+-----------------+----------------+--------------------+-------------+-----------------------+--------------------+-----------------------+
|        101 | ankush       | surat        | yogichowk       | male           | a                  |           5 | 2003-11-09            |         7567920122 |            9328510006 |
|        104 | kano         | surat        | jamangh         | male           | b                  |           5 | 2005-10-08            |         7566620145 |            7983457892 |
|        105 | purvi        | surat        | chopati         | female         | a+                 |           3 | 2007-12-09            |         8867920145 |            9955578925 |
|        106 | om           | surat        | katrgam         | male           | a+                 |           3 | 2008-10-09            |         7568020145 |            9939578925 |
|        109 | happy        | navsari      | maliba          | female         | a+                 |           4 | 2000-12-08            |         7500920144 |            8800578925 |
|        110 | damo         | navsari      | ho              | male           | a+                 |           1 | 2004-10-08            |         7577820144 |            8834578925 |
+------------+--------------+--------------+-----------------+----------------+--------------------+-------------+-----------------------+--------------------+-----------------------+
6 rows in set (0.00 sec)
=============================================================================================

    city jova
=========================================================================================
select student_city from stu;
+--------------+
| student_city |
+--------------+
| surat        |
| gindinger    |
| amaril       |
| surat        |
| surat        |
| surat        |
| rajot        |
| amaril       |
| navsari      |
| navsari      |
+--------------+
10 rows in set (0.00 sec)

mysql> 









