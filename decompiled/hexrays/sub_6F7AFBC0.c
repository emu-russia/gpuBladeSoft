unsigned int __cdecl sub_6F7AFBC0(int a1, int a2, int a3)
{
  _DWORD *v3; // esi@1
  int v4; // eax@1
  __int16 v5; // di@2
  int v6; // edx@3
  unsigned int result; // eax@5
  int v8; // ebp@7
  int v9; // eax@7

  v3 = (_DWORD *)(*(_DWORD *)(a1 + 384) + 4 * a2);
  v4 = *(_DWORD *)(a1 + 256);
  if ( !v4 )
  {
    v5 = *(_WORD *)(a1 + 296);
    if ( v5 )
    {
      v6 = *(_WORD *)(a1 + 294);
      if ( (_WORD)v6 )
      {
        v8 = sub_6F7A9D10(*(_DWORD *)(a1 + 244), v6);
        v9 = sub_6F7A9D10(*(_DWORD *)(a1 + 248), v5);
        v4 = sub_6F7C93F0(v8, v9);
        *(_DWORD *)(a1 + 256) = v4;
      }
      else
      {
        v4 = *(_DWORD *)(a1 + 248);
        *(_DWORD *)(a1 + 256) = v4;
      }
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 244);
      *(_DWORD *)(a1 + 256) = v4;
    }
  }
  result = sub_6F7C9760(a3, v4);
  *v3 = result;
  return result;
}
