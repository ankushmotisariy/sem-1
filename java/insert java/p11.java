import java.util.*;
class useraccount
{
String username, emailId, password;
Scanner sc=new Scanner(System.in);
useraccount()
{
username=null;
emailId=null;
password=null;
}
void getter()
{
System.out.println("ENTER USERNAME = ");
username=sc.next();
System.out.println("ENTER EMAIL ID = ");
emailId=sc.next();
System.out.println("ENTER PASSWORD = ");
password=sc.next();
}
void setter()
{
System.out.println("USERNAME IS = "+username);
System.out.println("EMAIL ID IS = "+emailId);
System.out.println("PASSWORD IS = "+password);
}
}
class Yahoo extends useraccount
{
String securityquestion,securityanswer;
Yahoo()
{
securityquestion=null;
securityanswer=null;
}
void getter()
{
System.out.println("ENTER SECURITY QUESTION = ");
securityquestion=sc.next();
System.out.println("ENTER SECURITY ANSWER = ");
securityanswer=sc.next();
}
void setter()
{
System.out.println("SECURITY QUESTION = "+securityquestion);
System.out.println("SECURITY ANSWER = "+securityanswer);
}
}
class twitter extends useraccount
{

String type,twitmesg;
twitter()
{
type=null;
twitmesg=null;
}
void getter()
{
System.out.println("ENTER TWITTER ACCOUNT TYPE = ");
type=sc.next();
System.out.println("ENTER TWITTER ACCOUNT MESSAGE = ");
twitmesg=sc.next();
}
void setter()
{
System.out.println("TWITTER ACCOUNT TYPE = "+type);
System.out.println("TWITTER ACCOUNT MESSAGE = "+twitmesg);
}
}
class p11
{
public static void main(String args[])
{
Yahoo y=new Yahoo();
y.getter();
y.setter();
twitter t=new twitter();
t.getter();
t.setter();
}
}