signed int __cdecl sub_6F8A2B30(const CHAR *a1, unsigned int a2, int *a3)
{
  int *v3; // ebx@1
  UINT v5; // [sp+10h] [bp-2Ch]@1
  int v6; // [sp+14h] [bp-28h]@1
  __int16 v7; // [sp+2Eh] [bp-Eh]@1

  v3 = a3;
  v7 = 0;
  v6 = __mb_cur_max_func();
  v5 = sub_6F8B1B80();
  if ( !a3 )
    v3 = (int *)&unk_70372B90;
  return sub_6F8A2810((WCHAR *)&v7, a1, a2, v3, v5, v6);
}
