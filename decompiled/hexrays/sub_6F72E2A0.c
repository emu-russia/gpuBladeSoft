int __usercall sub_6F72E2A0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5, int a6)
{
  int v6; // edi@1
  int v7; // ebp@3
  unsigned int v8; // ecx@9
  int result; // eax@9
  int v10; // eax@12

  v6 = a6;
  if ( a1 < a3 && a1 < a5 )
  {
    v7 = a1;
LABEL_7:
    a1 = a5;
    if ( a3 >= a5 )
      a1 = a3;
    goto LABEL_9;
  }
  v7 = a5;
  if ( a3 <= a5 )
    v7 = a3;
  if ( a1 <= a5 || a1 <= a3 )
    goto LABEL_7;
LABEL_9:
  v8 = a1 - v7;
  result = 0;
  if ( v8 < dword_6FBB51DC )
  {
    if ( a2 < a4 && a2 < a6 )
    {
      v10 = a2;
      if ( a4 >= a6 )
        v6 = a4;
      a2 = v6;
    }
    else
    {
      v10 = a6;
      if ( a4 <= a6 )
        v10 = a4;
      if ( a2 <= a6 || a2 <= a4 )
      {
        if ( a4 >= a6 )
          v6 = a4;
        a2 = v6;
      }
    }
    result = a2 - v10 < (unsigned int)dword_6FBB51E0;
  }
  return result;
}
