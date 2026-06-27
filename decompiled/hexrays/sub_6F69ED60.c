signed int __usercall sub_6F69ED60@<eax>(signed int result@<eax>, signed int a2@<edx>, signed int *a3@<ecx>, signed int *a4)
{
  double v4; // st7@1
  double v5; // st6@1
  double v6; // st5@3
  double v7; // st4@5
  double v8; // st5@9
  double v9; // st4@11

  *a3 = result;
  v4 = (double)result;
  *a4 = a2;
  v5 = (double)a2;
  if ( !dword_6FBB52C0
    || dword_6FBB52C4 != 1
    && (v8 = flt_6FBB5528, 0.0 != flt_6FBB5528)
    && flt_6FBB552C != 0.0
    && ((v9 = v8 / flt_6FBB552C, v8 * v5 > flt_6FBB552C * v4) ? (*a4 = (signed int)(v4 / v9)) : (*a3 = (signed int)(v9 * v5)),
        (result = dword_6FBB52C0) == 0) )
  {
    if ( dword_6FBB52E0 != 1 )
    {
      v6 = flt_6FBB5530;
      if ( 0.0 != flt_6FBB5530 && flt_6FBB5534 != 0.0 )
      {
        v7 = v6 / flt_6FBB5534;
        if ( v6 * v5 <= flt_6FBB5534 * v4 )
          *a3 = (signed int)(v5 * v7);
        else
          *a4 = (signed int)(v4 / v7);
      }
    }
  }
  return result;
}
