create table stu
(
 stu_id int primary key,
 stu_name char(10),
 stu_city char(20),
 stu_address char(100),
 stu_gender char(6),
 stu_blood_grop char(3),
 stu_sem int,
 stu_date_of_birth date,
 stu_lan_number bigint,
 stu_mobile_number bigint
);
 
insert into stu
values(101,'ankush','surat','yogichowk','male','o+',1,'2003-11-9',7567920122,9328510006);
insert into stu
values(102,'fiza','gindinger','hirabag','female','o+',2,'2003-11-8',7567920121,8849048885);
insert into stu
values(103,'daksh','amaril','pachtalavda','male','a+',3,'2005-10-9',7567920145,9934578925);
insert into stu
values(104,'kano','surat','jamangh','male','o+',5,'2005-10-8',7566620145,7983457892);
insert into stu
values(105,'purvi','surat','chopati','female','a+',3,'2007-12-9',8867920145,9955578925);
insert into stu
values(106,'om','surat','katrgam','male','a+',3,'2008-10-9',7568020145,9939578925);
insert into stu
values(107,'ab','rajot','gardanchowk','male','a',5,'2009-5-9',7567928145,9934578929);
insert into stu
values(108,'mayur','amaril','pansada','male','a+',6,'2000-10-8',7577920144,8834578925);
insert into stu
values(109,'priya','navsari','maliba','female','o+',4,'2000-12-8',7500920144,8800578925);
insert into stu
values(110,'damo','navsari','ho','male','a+',1,'2004-10-8',7577820144,8834578925);


===========================================================================================
                            pr_master
===========================================================================================

create table pr_info
(
 	pr_id int primary key,
 	pr_name char(50),
 	pr_murchant_name char(20),
	pr_qun int,
	pr_price int,
 	pr_purchase_date date
);
 
insert into pr_info
values(101,'pancil','ankush',12,15000,'2020-05-21');
insert into pr_info
values(102,'pen','daksh',21,1000,'2021-06-22');
insert into pr_info
values(103,'eraser','janvi',22,999,'2020-05-24');
insert into pr_info
values(104,'futpati','jill',24,5000,'2029-05-22');
insert into pr_info
values(105,'jill','darsan',25,2000,'2022-01-22');
insert into pr_info
values(106,'bharat','janvi',30,200,'2016-06-22');
insert into pr_info
values(107,'syerya','kalo',30,200,'2028-05-22');
insert into pr_info
values(108,'kano','nager',25,4500,'2027-05-22');
insert into pr_info
values(109,'darvin','druvin',556,212,'2020-04-27');
insert into pr_info
values(110,'davish','der',56,189,'2018-05-22');

==============================================================================================

                            customer
======================================================================================


create table customer
(
 cust_id int primary key,
 cust_name char(20),
 cust_address char(20),
 cust_mobile_no bigint,
 cust_blood_grop char(6),
 cust_date_of_brith date,
 cust_lan_n bigint
);

insert into customer
values(101,'ankushmotisariya','surat',7567920122,'a','2003-11-9',1234567891);

insert into customer
values(102,'fizapatel','gindinger',8849048885,'b','2002-12-8',7567920122);

insert into customer
values(103,'dakshpatel','amaril',9328510006,'c','2001-11-9',9328510006);

insert into customer
values(104,'dhrvin','surat',9328511006,'c','2001-11-8',7567920145);

insert into customer
values(105,'nitiya','surat',9321510006,'a','2002-11-9',4561237898);

insert into customer
values(106,'patel','surat',9228510006,'a+','2001-11-9',9874561231);

insert into customer
values(107,'priya','surat',9328512346,'a','2001-9-9',4561237897);

insert into customer
values(108,'part','surat',932890006,'a','2002-11-9',9913015250);

insert into customer
values(109,'om','rajokt',9228510006,'b','2004-12-7',9913015265);

insert into customer
values(110,'damo','amaril',9328810006,'a','2001-11-10',9874561230);

===================================================================================================
                              emp
===================================================================================

         create table Emp
(
	E_id int primary key,
	E_full_Name char(50),
	E_address char(150),
	E_gender char(10),
	Date_of_birth date, 
	E_designation char(45),
	E_deprtment char(30),
	E_salary decimal,
	E_expirince int,
	Date_of_join date
);

insert into Emp values(101,'daksh',' Mumbai','M','1993/12/08','HOD','Sales Manegment',300000,13,'2008/03/01');

insert into Emp values(102,'priya',' Mumbai','F','1988/03/18','Manager','Sales Manegment',25000,08,'2013/08/01');

insert into Emp values(103,' jaymin',' Surat','M','1990/05/20','Head Technicion','Assamblly',20000,10,'2015/03/01');

insert into Emp values(104,'omm',  Vadodara','M','1983/06/22','Salesmen','Sels Menegment',10000,03,'2018/08/01');

insert into Emp values(105,'priya', ' Navsari','F','1980/07/15','Supervisor','Manufacturing',50000,08,'2014/12/01');

insert into Emp values(106,'darshan',' Dang','M','1998/01/15','Security Gaurd','Security',15000,15,'2006/03/01');

insert into Emp values(107,'druv',' Ahmdabad','M','1980/08/18','HOD','Manufacturing',350000,18,'2003/08/01');

insert into Emp values(108,'damo','45, Atmiya Soc., Ranchi','M','1978/03/18','Manager','Manufacturing',30000,05,'2016/03/01');

insert into Emp values(109,'happy',' Chenai','F','1983/01/16','Worker','Manufacturing',13500,5,'2016/11/01');

insert into Emp values(110,'bharat',' Visshakhapatnam','M','1995/02/28','Co-Supervisor','Manufacturing',40000,5,'2016/03/01');

============================================================================================

       apply_detil
========================================================================================


create table apply_l_d 
(
	L_id int primary key,
	Student_name char(50),
	Semester int,
	To_date date,
	from_date date,
	To_time time, 
	From_time time,
	Reason char(50),
	Status char(10)
);

insert into apply_l_d  values(101,'Jenil Rewdiwala',1,'2021/12/14','2021/12/14','08:30:00','15:30:00','Going to marrege function','A');

insert into apply_l_d  values(102,'Ayush Mendapara',1,'2021/08/30','2021/09/02','08:30:00','15:30:00','Helth Issue','A');

insert into apply_l_d  values(103,'Prince Sutariya',3,'2020/09/15','2020/09/20','12:00:00','12:00:00','going to tour','R');

insert into apply_l_d  values(104,'Poojan Kharvar',1,'2021/11/01','2021/11/03','10:00:00','15:00:00','Marrege function','R');

insert into apply_l_d  values(105,'Khushi Gelani',8,'2018/08/16','2018/08/16','08:30:00','15:30:00','Dance Prectis','A');

insert into apply_l_d  values(106,'Mohmadd Kaif',1,'2021/12/18','2021/12/18','09:00:00','20:00:00','Freshers Party','R');

insert into apply_l_d  values(107,'Kaushik Ranpariya',1,'2020/01/14','2022/01/15','08:30:00','15:30:00','Makarsankranti','A');

insert into apply_l_d  values(108,'Parshva Shah',8,'2018/08/16','2018/08/16','08:30:00','15:30:00','Dance Prectis','A');

insert into apply_l_d  values(109,'Girish Suthar',1,'2021/12/14','2021/12/14','08:30:00','15:30:00','Going to marrege function','A');

insert into apply_l_d  values(110,'Prit Badhivala',1,'2021/11/01','2021/11/03','10:00:00','15:00:00','Marrege function','R');

=====================================================================================================================================















 
=====================================











