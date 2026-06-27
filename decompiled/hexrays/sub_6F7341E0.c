int sub_6F7341E0()
{
  _DWORD *v0; // eax@1
  int result; // eax@4
  int v2; // [sp+18h] [bp-14h]@1
  _DWORD *v3; // [sp+1Ch] [bp-10h]@1

  qword_70055ED8 = 0i64;
  dbl_70055EE8 = 0.0;
  dbl_70057F38 = 0.0;
  dbl_70055EC8 = 0.0;
  qword_70057F20 = 0i64;
  dbl_70057F30 = 0.0;
  dbl_70057F28 = 0.0;
  dword_70055EE0 = 0;
  dword_70041D80 = 0;
  *(_QWORD *)&dbl_70055ED0 = 9218868437227405311i64;
  sub_6F761890(dword_6FD40974);
  sub_6F761890(dword_6FD40970);
  sub_6F761890(dword_6FD4096C);
  byte_70055EC0 = 0;
  byte_6FD40100 = 0;
  v2 = 0;
  v0 = sub_6F961B60(8u);
  *v0 = off_6FB53888;
  v0[1] = sub_6F72CAF0;
  v3 = v0;
  sub_6F9385D0(&v2, (int *)&v3, 0);
  if ( v3 )
    (*(void (**)(void))(*v3 + 4))();
  if ( dword_6FBBFDC4 )
    sub_6F95D3C0();
  result = 0;
  dword_6FBBFDC4 = v2;
  return result;
}
