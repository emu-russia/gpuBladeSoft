signed int __usercall sub_6F8B62C0@<eax>(int *a1@<eax>, _DWORD *a2@<edx>)
{
  _DWORD *v2; // edi@1
  int *v3; // ebx@1
  int v4; // eax@2
  signed int v5; // esi@4

  v2 = a2;
  v3 = a1;
  *a2 = 0;
  sub_6F8B35C0(&dword_6FB48AE4);
  if ( v3 && (v4 = *v3) != 0 )
  {
    if ( v4 == -1 )
    {
      *v3 = 0;
      v5 = 0;
    }
    else
    {
      v5 = 22;
      if ( *(_DWORD *)v4 == -1162743571 )
      {
        v5 = *(_DWORD *)(v4 + 4);
        if ( v5 )
        {
          v5 = 16;
        }
        else
        {
          *v2 = v4;
          *v3 = 0;
        }
      }
    }
  }
  else
  {
    v5 = 22;
  }
  sub_6F8B3600(&dword_6FB48AE4);
  return v5;
}
