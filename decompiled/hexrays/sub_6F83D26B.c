int __cdecl sub_6F83D26B(int a1, void *a2, size_t a3)
{
  int result; // eax@6
  size_t v4; // [sp+10h] [bp-18h]@4
  const void *v5; // [sp+14h] [bp-14h]@4
  int v6; // [sp+18h] [bp-10h]@3
  int *v7; // [sp+1Ch] [bp-Ch]@2

  if ( a1 )
  {
    v7 = *(int **)(a1 + 96);
    if ( !v7 || (v6 = *v7) == 0 )
      sub_6F839044(a1, (int)"invalid memory read");
    v5 = *(const void **)(v6 + 12);
    v4 = *(_DWORD *)(v6 + 16);
    if ( !v5 || v4 < a3 )
      sub_6F839044(a1, (int)"read beyond end of data");
    memcpy(a2, v5, a3);
    *(_DWORD *)(v6 + 12) = (char *)v5 + a3;
    result = v6;
    *(_DWORD *)(v6 + 16) = v4 - a3;
  }
  return result;
}
