import java.util.*;  
public class Main {  
public static void main(String args[]){  
          Scanner sc = new Scanner(System.in);  
          int a=sc.nextInt();
          for(int i=0;i<a;i++)
          {
         int x=sc.nextInt();
         int ing[]=new int[x], arr[]=new int[x];
         for(int j=0;j<x;j++)
         ing[j]=sc.nextInt();
         int hcf=ing[0];
         int ans1=0;
         for(int k=1;k<x;k++)
         {
             int max=0;
             for(int p=1;p<ing[k];p++)
             {
                 if(ing[k]%p==0 && ing[k]%hcf==0)
                 {
                     if(p>max)
                     max=p;
                 }
                 hcf=max;
                
             }
             ans1=hcf;
                 }
          for(int m=0;m<x;m++)
          System.out.print(((ing[m])/(ans1))+" ");
              System.out.println();
          }
        sc.close();             
          }  
}