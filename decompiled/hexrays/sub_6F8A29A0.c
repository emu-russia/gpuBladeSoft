signed int __cdecl sub_6F8A29A0(WCHAR *a1, const CHAR *a2, unsigned int a3, int *a4)
{
  WCHAR *v4; // ebx@1
  int *v5; // esi@1
  UINT v7; // [sp+10h] [bp-2Ch]@3
  int v8; // [sp+14h] [bp-28h]@3
  __int16 v9; // [sp+2Eh] [bp-Eh]@1

  v4 = a1;
  v5 = a4;
  v9 = 0;
  if ( !a1 )
    v4 = (WCHAR *)&v9;
  v8 = __mb_cur_max_func();
  v7 = sub_6F8B1B80();
  if ( !a4 )
    v5 = (int *)&unk_70372B98;
  return sub_6F8A2810(v4, a2, a3, v5, v7, v8);
}
