signed int __cdecl sub_6F770ED0(_DWORD *a1, int a2, const char *a3, char **a4, _DWORD *a5)
{
  signed int v5; // esi@1
  signed int v6; // eax@1
  signed int v8; // ebx@3
  char *v9; // eax@3
  char *v10; // ebp@3
  size_t v11; // ST08_4@4
  int v12; // ebx@4
  int v13; // [sp+1Ch] [bp-20h]@3

  v5 = 10;
  v6 = strlen(a3);
  if ( v6 <= 2147483641 )
  {
    v8 = v6;
    v9 = (char *)sub_6F773A50(*a1, v6 + 6, &v13);
    v5 = v13;
    v10 = v9;
    if ( !v13 )
    {
      v11 = v8;
      v12 = (int)&v9[v8];
      memcpy(v9, a3, v11);
      *(_DWORD *)v12 = 1920168495;
      *(_WORD *)(v12 + 4) = 99;
      *a4 = v10;
      *a5 = 0;
    }
  }
  return v5;
}
