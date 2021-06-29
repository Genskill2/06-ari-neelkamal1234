string ari( string s)
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
      int ari;
      
      ARI = 4.71*(count1/count2) + 0.5*(count2/count3) -21.43 ;
                           
     for( int i=1;i<=14;i++)
        {   
            if( ARI <= i)
               {  ari = i; break;
               }
        }
        
      switch(ari)
      {
        case 1 : string st ="kindergarten";break;
        case 2 : string st ="First/Second Grade";break;
        case 3 : string st ="Third Grade";break;
        case 4 : string st ="Fourth Grade";break;  
        case 5 : string st ="Fifth Grade";break;
        case 6 : string st ="Sixth Grade";break;
        case 7 : string st ="Seventh Grade";break;
        case 8 : string st ="Eighth Grade";break;      
        case 9 : string st ="Ninth Grade";break;                 
        case 10 : string st ="Tenth Grade";break; 
        case 11 : string st ="Eleventh Grade";break;                 
        case 12 : string st ="Twelfth Grade";break;               
        case 13 : string st ="College Student";break;                
        case 14 : string st ="Professor";break;                  
        default :printf( " Invalid Choice \n" )
        
        }
        
        return st;
        }
              
           
           
           
           
           
           
           
           
           
           
           
           
           
           
