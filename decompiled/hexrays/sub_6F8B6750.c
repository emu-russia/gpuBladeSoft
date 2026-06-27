signed int __usercall sub_6F8B6750@<eax>(int *a1@<eax>)
{
  int *v1; // ebx@1
  signed int v2; // esi@2
  int v3; // eax@2

  v1 = a1;
  if ( *a1 != -1 || (v2 = sub_6F8B66F0(a1), !(v2 & 0xFFFFFFEF)) )
  {
    v2 = 22;
    sub_6F8B35C0(&dword_6FB48AE4);
    v3 = *v1;
    if ( *v1 && *(_DWORD *)v3 == -1162743571 )
    {
      ++*(_DWORD *)(v3 + 4);
      v2 = 0;
    }
    sub_6F8B3600(&dword_6FB48AE4);
  }
  return v2;
}
