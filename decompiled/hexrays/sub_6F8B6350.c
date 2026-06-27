signed int __usercall sub_6F8B6350@<eax>(int *a1@<eax>)
{
  int *v1; // ebx@1
  int v2; // eax@2
  signed int v3; // ebx@2

  v1 = a1;
  sub_6F8B35C0(&dword_6FB48AE4);
  if ( v1 )
  {
    v2 = *v1;
    v3 = 22;
    if ( v2 )
    {
      if ( *(_DWORD *)v2 == -1162743571 )
      {
        v3 = 1;
        if ( v2 != -1 )
        {
          ++*(_DWORD *)(v2 + 4);
          v3 = 0;
        }
      }
    }
  }
  else
  {
    v3 = 22;
  }
  sub_6F8B3600(&dword_6FB48AE4);
  return v3;
}
