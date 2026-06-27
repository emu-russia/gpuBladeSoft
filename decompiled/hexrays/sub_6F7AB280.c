int __cdecl sub_6F7AB280(int a1, int a2)
{
  int v2; // edx@1
  __int16 v3; // si@2
  int v4; // edx@3
  signed __int64 v5; // rax@5
  int v7; // edi@7
  int v8; // eax@7

  v2 = *(_DWORD *)(a1 + 256);
  if ( !v2 )
  {
    v3 = *(_WORD *)(a1 + 296);
    if ( v3 )
    {
      v4 = *(_WORD *)(a1 + 294);
      if ( (_WORD)v4 )
      {
        v7 = sub_6F7A9D10(*(_DWORD *)(a1 + 244), v4);
        v8 = sub_6F7A9D10(*(_DWORD *)(a1 + 248), v3);
        v2 = sub_6F7C93F0(v7, v8);
        *(_DWORD *)(a1 + 256) = v2;
      }
      else
      {
        v2 = *(_DWORD *)(a1 + 248);
        *(_DWORD *)(a1 + 256) = v2;
      }
    }
    else
    {
      v2 = *(_DWORD *)(a1 + 244);
      *(_DWORD *)(a1 + 256) = v2;
    }
  }
  v5 = v2 * (signed __int64)*(_DWORD *)(*(_DWORD *)(a1 + 384) + 4 * a2);
  return (((unsigned __int64)(unsigned int)((SHIDWORD(v5) >> 31) + 0x8000) + v5) >> 32 << 16)
       + ((unsigned int)((SHIDWORD(v5) >> 31) + 0x8000 + v5) >> 16);
}
