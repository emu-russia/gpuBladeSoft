int __usercall sub_6F78E200@<eax>(char *a1@<eax>, size_t a2@<edx>, int a3@<ecx>, _DWORD *a4)
{
  char *v4; // edi@2
  unsigned int v5; // esi@2
  size_t v6; // eax@2
  signed int v7; // edx@3
  unsigned __int8 v8; // al@4
  bool v9; // cf@4
  bool v10; // zf@4
  int result; // eax@4
  void *v12; // ebx@9
  int v13; // [sp+1Ch] [bp-10h]@1

  v13 = 0;
  if ( !a2 )
    goto LABEL_11;
  v4 = a1;
  v5 = a2;
  v6 = a2 - 1;
  if ( v4[a2 - 1] )
  {
    v7 = 1;
  }
  else
  {
    v7 = a2 != 1;
    if ( !v6 )
    {
      v5 = 0;
      goto LABEL_8;
    }
    v5 = v6;
  }
  v8 = *v4 - 32;
  v9 = v8 < 0x5Fu;
  v10 = v8 == 95;
  result = 0;
  if ( !v9 && !v10 )
    goto LABEL_12;
  while ( ++result < v5 )
  {
    if ( (unsigned __int8)(v4[result] - 32) > 0x5Fu )
      goto LABEL_11;
  }
LABEL_8:
  if ( !v7 )
  {
LABEL_11:
    result = 0;
LABEL_12:
    v12 = 0;
    goto LABEL_13;
  }
  v12 = sub_6F773A50(a3, v5 + 1, &v13);
  result = v13;
  if ( !v13 )
  {
    memcpy(v12, v4, v5);
    *((_BYTE *)v12 + v5) = 0;
    result = v13;
    *a4 = v12;
    return result;
  }
LABEL_13:
  *a4 = v12;
  return result;
}
