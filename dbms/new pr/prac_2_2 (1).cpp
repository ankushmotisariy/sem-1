	---------------		TABLE		-----------------

create table STUDENT_DETAILS
(
	st_id int primary key,
	st_full_name char(50),
	st_address char(20),
	st_gender char(10),
	Date_of_birth date,
	st_landline_num bigint,
	st_mobile_num bigint,
	st_current_sem int,
	st_blood_group char(50)
);


create table PRODUCT_MASTER
(
	p_id int primary key,
	p_name char(50),
	p_merchant_name char(30),
	p_quantity int,
	p_price int,
	p_purchase_date date
);


create table EMPLOYEE_MASTER
(
	E_id int primary key,
	E_full_name char(50) not null,
	E_address char(50) not null,
	E_gender char(06),
	Date_of_birth date,
	E_designation char(20),
	E_department char(30) not null,
	E_salary int,
	e_expriment int,
	CCC date,
	highest_qualification char(20) not null,
	expertise_in char(50)
);


create table CUSTOMER_MASTER
(
	Cust_id int primary key,
	Cust_full_name char(30) not null,
	Cust_address char(50),
	Date_of_birth date,
	Cust_landine_num bigint,
	Cust_mobie_num bigint,
	Cust_blood_group char(05)
);



create table APPLY_LEAVE_DETAILS 
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




	---------------		Quary		-----------------


	1 ) 

	UPDATE PRODUCT_MASTER
	SET p_quantity = p_quantity -5;


	2 ) 
	UPDATE STUDENT_DETAILS
	SET st_full_name = 'PRIYANK' WHERE st_id = 1; 
	
	3 )

	update STUDENT_DETAILS
	SET st_mobile_num = 9998817009 where st_id = 5;

	4 )

	select  max(p_price) from PRODUCT_MASTER; 

	5 )

	SELECT MIN(p_quantity) from PRODUCT_MASTER; 

	6 )

	
	SELECT AVG(E_salary) from EMPLOYEE_MASTER;


	7 )

	SELECT sum(E_id) from EMPLOYEE_MASTER;
		

	8 )

	UPDATE STUDENT_DETAILS
	SET st_full_name = 'darshan' , Date_of_birth = '2002-08-13' where st_id = 10; 


	9 )

	dELETE FROM EMPLOYEE_MASTER WHERE E_salary < 5000;
	

	10 )

	UPDATE APPLY_LEAVE_DETAILS
	SET To_date = '2016-07-17' , From_date = '2016-07-18' WHERE L_id = 6;

	11 ) 
	
	delete 	from APPLY_LEAVE_DETAILS where Status = 'reject';


	12 ) 

	delete from STUDENT_DETAILS WHERE st_address = 'surat';

	13 )

	update 	CUSTOMER_MASTER
	set Cust_full_name = 'priyank' where cust_id = 1;
	

	14 )

	update CUSTOMER_MASTER
	set Cust_blood_group = 'ab+' where Cust_id = 9;
	

	15 )

	
	delete from PRODUCT_MASTER where p_price > 10000;











	
                                                                                                                                                                                                                                                                                                                                                                                                                      
