int __usercall sub_6F8B3BF0@<eax>(int result@<eax>)
{
  _DWORD *v1; // ebx@2
  unsigned __int32 v2; // eax@5
  signed int v3; // eax@5
  char v4; // [sp+15h] [bp-77h]@5
  char v5[38]; // [sp+16h] [bp-76h]@10
  char v6; // [sp+3Ch] [bp-50h]@5
  char v7; // [sp+3Dh] [bp-4Fh]@5

  if ( result )
  {
    v1 = (_DWORD *)result;
    result = sub_6F8B35B0();
    if ( result == 1 )
    {
      qmemcpy(&v4, "Error cleaning up spin_keys for thread ", 0x28u);
      memset(&v7, 0, 0x43u);
      v2 = GetCurrentThreadId();
      ultoa(v2, &v6, 10);
      v3 = 39;
      if ( !v6 )
        goto LABEL_15;
      do
      {
        if ( !*(&v4 + ++v3) )
          break;
      }
      while ( v3 != 106 );
      if ( v3 != 106 )
      {
LABEL_15:
        *(&v4 + v3) = 10;
        v5[v3] = 0;
      }
      OutputDebugStringA(&v4);
      abort();
    }
    *v1 = -1;
  }
  return result;
}
