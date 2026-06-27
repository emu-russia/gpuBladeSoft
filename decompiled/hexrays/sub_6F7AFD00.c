int __cdecl sub_6F7AFD00(int a1)
{
  int v1; // edx@1
  __int16 v2; // si@2
  int v3; // edx@3
  unsigned __int64 v4; // rax@5
  int v6; // edi@7
  int v7; // eax@7

  v1 = *(_DWORD *)(a1 + 256);
  if ( !v1 )
  {
    v2 = *(_WORD *)(a1 + 296);
    if ( v2 )
    {
      v3 = *(_WORD *)(a1 + 294);
      if ( (_WORD)v3 )
      {
        v6 = sub_6F7A9D10(*(_DWORD *)(a1 + 244), v3);
        v7 = sub_6F7A9D10(*(_DWORD *)(a1 + 248), v2);
        v1 = sub_6F7C93F0(v6, v7);
        *(_DWORD *)(a1 + 256) = v1;
      }
      else
      {
        v1 = *(_DWORD *)(a1 + 248);
        *(_DWORD *)(a1 + 256) = v1;
      }
    }
    else
    {
      v1 = *(_DWORD *)(a1 + 244);
      *(_DWORD *)(a1 + 256) = v1;
    }
  }
  v4 = v1 * (unsigned __int64)*(_WORD *)(a1 + 252);
  return (((unsigned int)((SHIDWORD(v4) >> 31) + 0x8000) + v4) >> 32 << 16)
       + ((unsigned int)((SHIDWORD(v4) >> 31) + 0x8000 + v4) >> 16);
}
