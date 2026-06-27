signed int __usercall sub_6F7BA630@<eax>(int a1@<eax>, const void *a2@<edx>, unsigned int a3@<ecx>)
{
  const void *v3; // ebp@1
  int v4; // esi@1
  unsigned int v5; // edi@1
  signed int v6; // ebx@1
  __int16 v8; // ax@3
  __int16 v9; // [sp+1Ch] [bp-30h]@10
  int v10; // [sp+2Ch] [bp-20h]@3

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = sub_6F771FF0(a1, 0);
  if ( v6 )
    return v6;
  v8 = sub_6F772620(v4, &v10);
  v6 = v10;
  if ( v10 )
    return v6;
  if ( (unsigned __int16)(v8 + 0x7FFF) > 1u )
    goto LABEL_15;
  v9 = v8;
  sub_6F772860(v4, &v10);
  v6 = v10;
  if ( v10 )
    return v6;
  if ( v9 != -32767 )
  {
LABEL_15:
    v6 = sub_6F771FF0(v4, 0);
    if ( v6 )
      return v6;
  }
  v6 = sub_6F772380(v4, v5);
  if ( v6 )
    return v6;
  if ( memcmp(*(const void **)(v4 + 32), v3, v5) )
    v6 = 2;
  sub_6F772460(v4);
  return v6;
}
