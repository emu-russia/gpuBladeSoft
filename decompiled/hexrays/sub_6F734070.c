int sub_6F734070()
{
  double v0; // st7@1
  int result; // eax@3
  __int64 v2; // kr00_8@3
  double v3; // st6@4

  v0 = sub_6F761A30(dword_6FD40970) + dbl_70055EE8;
  dbl_70055EE8 = v0;
  if ( dword_70041D80 )
  {
    ++dword_70055EE0;
    dword_70041D80 = 0;
  }
  v2 = qword_70055ED8 + 1;
  result = (unsigned __int64)(qword_70055ED8++ + 1) >> 32;
  if ( v0 >= 1.0 )
  {
    qword_70055ED8 = 0i64;
    dword_70055EE0 = 0;
    dbl_70057F38 = (double)v2 / v0;
    dbl_70055EE8 = 0.0;
    v3 = dbl_70055ED0;
    *(_QWORD *)&dbl_70055ED0 = 9218868437227405311i64;
    dbl_70057F30 = v3;
    dbl_70057F28 = dbl_70055EC8;
    dbl_70055EC8 = 0.0;
  }
  return result;
}
