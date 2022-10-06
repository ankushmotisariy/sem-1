create procedure name_s()
	begin
	select p_id,p_name,p_price,p_quantity from product_detail where p_name like 's%'; 
	end:

create procedure sum_1()
	begin
		declare i int;
		set i = 10;
		select i;
	end:

create procedure additon_1()
	begin
		declare a,b,c int;
		set a = 20;
		set b = 30;
		set c = a + b;

		select c as 'value of c = ';
	end:

create procedure sub_1()
	begin
		declare a,b,c int;
		set a = 20;
		set b = 30;
		set c = a - b;

		select c as 'value of c = ';
	end:

create procedure div_1()
	begin
		declare a,b,c int;
		set a = 20;
		set b = 3;
		set c = a div b;

		select c as 'value of c = ';
	end:

create procedure defult_1()
	begin
		declare a int default 5;
		select a;
	end:
