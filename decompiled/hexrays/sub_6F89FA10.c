signed int __usercall sub_6F89FA10@<eax>(signed int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // edx@3
  int v4; // edi@3
  char *v5; // esi@3
  signed int v6; // ebx@4
  int v7; // edi@4
  signed int v8; // edx@5
  char v9; // bp@7
  int v10; // eax@8

  if ( *(_DWORD *)a3 == 49 )
  {
    v3 = *(_DWORD *)(a3 + 8);
    v4 = *(_DWORD *)(v3 + 8);
    v5 = *(char **)(v3 + 4);
    if ( v4 )
    {
      v6 = result;
      v7 = (int)&v5[v4];
      result = *(_DWORD *)(result + 256);
      do
      {
        v9 = *v5;
        if ( result == 255 )
        {
          v10 = *(_DWORD *)(v6 + 268);
          *(_BYTE *)(v6 + 255) = 0;
          (*(void (__cdecl **)(signed int, signed int, int))(v6 + 264))(v6, 255, v10);
          ++*(_DWORD *)(v6 + 296);
          result = 1;
          v8 = 0;
        }
        else
        {
          v8 = result++;
        }
        ++v5;
        *(_DWORD *)(v6 + 256) = result;
        *(_BYTE *)(v6 + v8) = v9;
        *(_BYTE *)(v6 + 260) = v9;
      }
      while ( v5 != (char *)v7 );
    }
  }
  else
  {
    result = sub_6F899DD0(result, a2, a3);
  }
  return result;
}
