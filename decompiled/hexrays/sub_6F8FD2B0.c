int __cdecl sub_6F8FD2B0(const void *a1, int a2)
{
  size_t v2; // ebx@3
  int v3; // ebp@3
  _DWORD *v4; // eax@3
  int *v5; // esi@3
  int v6; // edx@3
  int v8; // ST1C_4@5

  if ( a2 && !a1 )
    sub_6F95AFD0("basic_string::_S_construct null not valid");
  v2 = a2 - (_DWORD)a1;
  v3 = (a2 - (signed int)a1) >> 1;
  v4 = sub_6F8FD810(v3, 0);
  v5 = v4;
  v6 = (int)(v4 + 3);
  if ( v3 == 1 )
  {
    *((_WORD *)v4 + 6) = *(_WORD *)a1;
  }
  else if ( v3 )
  {
    v8 = (int)(v4 + 3);
    memcpy(v4 + 3, a1, v2);
    v6 = v8;
  }
  v5[2] = 0;
  *v5 = v3;
  *(_WORD *)((char *)v5 + v2 + 12) = 0;
  return v6;
}
