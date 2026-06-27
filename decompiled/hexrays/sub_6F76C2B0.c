signed int __cdecl sub_6F76C2B0(int a1, _DWORD *a2)
{
  signed int result; // eax@1
  int v3; // esi@4
  int v4; // ebp@4
  void *v5; // edx@4
  _DWORD *v6; // ecx@4
  int v7; // ST18_4@5
  int (__cdecl *v8)(void *); // eax@8
  _DWORD *v9; // ST1C_4@9
  void *v10; // ST1C_4@10
  _DWORD *v11; // ST18_4@10
  void *v12; // [sp+18h] [bp-34h]@7
  int v13; // [sp+2Ch] [bp-20h]@4

  result = 35;
  if ( a1 )
  {
    result = 6;
    if ( a2 )
    {
      result = 34;
      if ( *(_DWORD *)(a1 + 96) )
      {
        if ( (*a2 = 0,
              v3 = *(_DWORD *)(a1 + 100),
              v4 = *(_DWORD *)(*(_DWORD *)(a1 + 96) + 12),
              v5 = sub_6F773A50(*(_DWORD *)(a1 + 100), *(_DWORD *)(v4 + 40), &v13),
              v6 = 0,
              v13)
          || (v12 = v5, v6 = sub_6F773A50(v3, 12, &v13), v5 = v12, v13)
          || (v8 = *(int (__cdecl **)(void *))(v4 + 56), *(_DWORD *)v12 = a1, *((_DWORD *)v12 + 10) = 0, v8)
          && (v9 = v6, v13 = v8(v12), v5 = v12, v6 = v9, v13)
          || (v10 = v5,
              v11 = v6,
              *a2 = v5,
              v6[2] = v5,
              sub_6F773F80(a1 + 108, (int)v6),
              result = v13,
              v6 = v11,
              v5 = v10,
              v13) )
        {
          v7 = (int)v5;
          sub_6F773D90(v3, (int)v6);
          sub_6F773D90(v3, v7);
          result = v13;
        }
      }
    }
  }
  return result;
}
