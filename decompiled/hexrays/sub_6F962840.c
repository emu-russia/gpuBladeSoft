void __noreturn sub_6F962840()
{
  int *v0; // eax@1
  int v1; // edx@1
  _QWORD *v2; // ebx@4

  v0 = sub_6F962260();
  v1 = *v0;
  ++v0[1];
  if ( v1 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(v1 + 48) - 5138137972254386944i64) <= 1 )
      *(_DWORD *)(v1 + 20) = -*(_DWORD *)(v1 + 20);
    else
      *v0 = 0;
    v2 = (_QWORD *)(v1 + 48);
    sub_6F8A1DE0(v1 + 48);
    sub_6F961E00(v2);
  }
  sub_6F95D3C0();
}
