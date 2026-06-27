int __usercall sub_6F8C2540@<eax>(int *a1@<eax>, int a2@<edx>)
{
  int *v2; // ebx@1
  int result; // eax@1
  int v4; // ecx@1
  _WORD *v5; // eax@4

  v2 = a1;
  result = a2;
  v4 = *v2;
  if ( (_WORD)a2 == -1 && v4 )
  {
    v5 = *(_WORD **)(v4 + 8);
    if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 12) )
      result = (*(int (**)(void))(*(_DWORD *)v4 + 36))();
    else
      result = *v5;
    if ( (_WORD)result == -1 )
      *v2 = 0;
  }
  return result;
}
