char *ari( char *s)
{  int count1 =0;
   int count2 =0;
   int count3 =0;
   
 
   for(int i=0;s[i]='\0';i++)
     
     { 
       if ( isalnum(s[i])|| isachar(s[i]) )
            count1++;
            
            else{
                  if( s[i] =='_' )
                     count2++;
                     
                     else{
                           if( s[i]=='_'|| s[i]=='?')
                              count3++;
                          }
                } 
     }            
                
      float ARI;
      int ari1;
      
      ARI = 4.71*(count1/count2) + 0.5*(count2/count3) -21.43 ;
                           
     for( int i=1;i<=14;i++)
        {   
            if( ARI <= i)
               {  ari1 = i; break;
               }
        }
        
      switch(ari1)
      {
        case 1 : char *st ="kindergarten";break;
        case 2 : char *st ="First/Second Grade";break;
        case 3 : char *st ="Third Grade";break;
        case 4 : char *st ="Fourth Grade";break;  
        case 5 : char *st ="Fifth Grade";break;
        case 6 : char *st ="Sixth Grade";break;
        case 7 : char *st ="Seventh Grade";break;
        case 8 : char *st ="Eighth Grade";break;      
        case 9 : char *st ="Ninth Grade";break;                 
        case 10 : char *st ="Tenth Grade";break; 
        case 11 : char *st ="Eleventh Grade";break;                 
        case 12 : char *st ="Twelfth Grade";break;               
        case 13 : char *st ="College Student";break;                
        case 14 : char *st ="Professor";break;                  
        default :printf( " Invalid Choice \n" )
        
        }
        
        return *st;
        }
              
           
           
           
           
           
           
           
           
           
           
           
           
           
           
