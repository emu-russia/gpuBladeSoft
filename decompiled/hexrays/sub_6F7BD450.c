int __cdecl sub_6F7BD450(int a1)
{
  int v1; // esi@2
  int v2; // edx@2
  void (__cdecl *v3)(int); // eax@10
  int result; // eax@1
  int v5; // [sp+20h] [bp+4h]@1

  result = *(_DWORD *)(a1 + 160);
  v5 = *(_DWORD *)(a1 + 160);
  if ( v5 )
  {
    result = *(_DWORD *)(v5 + 4);
    v1 = *(_DWORD *)(*(_DWORD *)(result + 96) + 8);
    v2 = *(_DWORD *)(result + 84);
    if ( v2 )
    {
      if ( v5 == v2 )
      {
        *(_DWORD *)(result + 84) = *(_DWORD *)(v5 + 8);
LABEL_10:
        v3 = *(void (__cdecl **)(int))(v5 + 20);
        if ( v3 )
          v3(v5);
        sub_6F768BE0(v5);
        result = sub_6F773D90(v1, v5);
      }
      else
      {
        while ( 1 )
        {
          result = *(_DWORD *)(v2 + 8);
          if ( !result )
            break;
          if ( v5 == result )
          {
            *(_DWORD *)(v2 + 8) = *(_DWORD *)(v5 + 8);
            goto LABEL_10;
          }
          v2 = *(_DWORD *)(v2 + 8);
        }
      }
    }
  }
  return result;
}
