BEGIN {
     FS = " ";
     f=1
     #players
     for(i=0;i<10;i++) {
        FieldSize[f++] = 4;
     }
     #goalies
     FieldSize[f++]=5;
     for(i=0;i<2;i++) {
        FieldSize[f++] = 4;
     }
     #referee
     FieldSize[f++]=5;
}

/.*/ {
    if(NF==14) {
#        print  "NOTFILTE " $0
        for(i=1; i<=14; i++) {
               if($i==prev[i]) {
                 printf("%*s ",FieldSize[i],".")
               }
               else printf ("%*s ",FieldSize[i],$i) 
               prev[i] = $i
        
        }
        printf("\n")
    }
    else print $0
}

END{
}
