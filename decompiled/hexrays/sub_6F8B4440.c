signed int sub_6F8B4440()
{
  HANDLE v0; // eax@1
  BOOL v1; // eax@1
  signed int v2; // ecx@1
  unsigned int v3; // edx@2
  unsigned int v5; // [sp+18h] [bp-14h]@1
  char v6; // [sp+1Ch] [bp-10h]@1

  v0 = GetCurrentProcess();
  v1 = GetProcessAffinityMask(v0, (PDWORD_PTR)&v5, (PDWORD_PTR)&v6);
  v2 = 1;
  if ( v1 )
  {
    v3 = v5;
    if ( v5 )
    {
      v2 = 0;
      do
      {
        v2 += v3 & 1;
        v3 >>= 1;
      }
      while ( v3 );
      if ( !v2 )
        v2 = 1;
    }
  }
  return v2;
}
