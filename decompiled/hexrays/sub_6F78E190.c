int __cdecl sub_6F78E190(const void *a1, int a2, int a3)
{
  int result; // eax@1
  size_t v4; // esi@3
  void *v5; // eax@3
  void *v6; // edx@3
  int v7; // [sp+1Ch] [bp-10h]@1

  result = 0;
  v7 = 0;
  if ( !*(_DWORD *)(a3 + 80) )
  {
    v4 = a2 - (_DWORD)a1;
    v5 = sub_6F773A50(*(_DWORD *)a3, a2 - (_DWORD)a1 + 1, &v7);
    v6 = v5;
    *(_DWORD *)(a3 + 80) = v5;
    result = v7;
    if ( !v7 )
    {
      memcpy(v6, a1, v4);
      *(_BYTE *)(*(_DWORD *)(a3 + 80) + v4) = 0;
      result = v7;
    }
  }
  return result;
}
