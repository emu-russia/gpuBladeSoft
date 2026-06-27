int __usercall sub_6F8C23B0@<eax>(int *a1@<eax>, int a2@<edx>)
{
  int *v2; // ebx@1
  int result; // eax@1
  int v4; // ecx@1
  _BYTE *v5; // eax@4

  v2 = a1;
  result = a2;
  v4 = *v2;
  if ( a2 == -1 && v4 )
  {
    v5 = *(_BYTE **)(v4 + 8);
    if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 12) )
    {
      result = (*(int (**)(void))(*(_DWORD *)v4 + 36))();
      if ( result == -1 )
        *v2 = 0;
    }
    else
    {
      result = *v5;
    }
  }
  return result;
}
