int __thiscall sub_6F759D90(_DWORD *this, int a2)
{
  _DWORD *v2; // ebp@1
  const void *v3; // edi@1
  size_t v4; // ebx@1
  int *v5; // eax@5
  signed int v6; // ebp@6
  int *v8; // [sp+18h] [bp-34h]@1
  size_t v9; // [sp+1Ch] [bp-30h]@6
  size_t v10; // [sp+20h] [bp-2Ch]@1

  v2 = this;
  v8 = (int *)&v10;
  v3 = *(const void **)a2;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 + *(_DWORD *)a2 && !v3 )
    sub_6F95AFD0("basic_string::_M_construct null not valid");
  if ( v4 > 0xF )
  {
    if ( (v4 & 0x80000000) != 0 )
      sub_6F95B240("basic_string::_M_create");
    v5 = (int *)sub_6F961B60(v4 + 1);
    v10 = v4;
    v8 = v5;
LABEL_13:
    memcpy(v5, v3, v4);
    v5 = v8;
    goto LABEL_6;
  }
  if ( v4 == 1 )
  {
    v5 = (int *)&v10;
    LOBYTE(v10) = *(_BYTE *)v3;
    goto LABEL_6;
  }
  v5 = (int *)&v10;
  if ( v4 )
    goto LABEL_13;
LABEL_6:
  v9 = v4;
  *((_BYTE *)v5 + v4) = 0;
  v6 = sub_6F759860(v2, (const char **)&v8);
  if ( (size_t *)v8 != &v10 )
    j_free_1(v8);
  return -(v6 != 0);
}
