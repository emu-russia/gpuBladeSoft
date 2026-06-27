unsigned int __cdecl sub_6F7AFC60(int a1, int a2, int a3)
{
  int v3; // eax@1
  __int16 v4; // di@2
  int v5; // edx@3
  unsigned int result; // eax@5
  int v7; // ebp@7
  int v8; // eax@7

  v3 = *(_DWORD *)(a1 + 256);
  if ( !v3 )
  {
    v4 = *(_WORD *)(a1 + 296);
    if ( v4 )
    {
      v5 = *(_WORD *)(a1 + 294);
      if ( (_WORD)v5 )
      {
        v7 = sub_6F7A9D10(*(_DWORD *)(a1 + 244), v5);
        v8 = sub_6F7A9D10(*(_DWORD *)(a1 + 248), v4);
        v3 = sub_6F7C93F0(v7, v8);
        *(_DWORD *)(a1 + 256) = v3;
      }
      else
      {
        v3 = *(_DWORD *)(a1 + 248);
        *(_DWORD *)(a1 + 256) = v3;
      }
    }
    else
    {
      v3 = *(_DWORD *)(a1 + 244);
      *(_DWORD *)(a1 + 256) = v3;
    }
  }
  result = sub_6F7C9760(a3, v3);
  *(_DWORD *)(*(_DWORD *)(a1 + 384) + 4 * a2) += result;
  return result;
}
