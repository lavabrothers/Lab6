if (pNumbers1==NULL) return pNumbers2;
if(pNumbers2==NULL) return pNumbers1;
if (pNumbers1&&pNumbers2){
if (pNumbers1->value <= pNumbers2->value)
{
    int sorting = pNumbers1;
    pNumbers1=sorting->next;
    }
    else{
        sorting = pNumbers2;
        pNumbers2=sorting->next;

    }
}
//newhead = sorting;
while(pNumbers1&&pNumbers2){
if (pNumbers1->value <= pNumbers2->value)
{
    sorting -> next = pNumbers1;
    sorting = pNumbers1;
    pNumbers1=sorting->next;
    }
    else{
        sorting -> next = pNumbers2;
        sorting = pNumbers2;
        pNumbers2=sorting->next;

    }





if (pNumbers1==NULL) sorting -> next = pNumbers2;
if(pNumbers2==NULL) return sorting -> next = pNumbers1;
//return newhead;
}







}