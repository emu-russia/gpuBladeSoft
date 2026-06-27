void __usercall sub_6F69C7A0(int a1@<eax>)
{
  int v1; // ebx@1
  int v2; // ebp@1
  void *v3; // eax@1
  int v4; // esi@2
  char *v5; // ebp@4
  unsigned int v6; // eax@5
  int i; // esi@5
  size_t v8; // ecx@7
  const void *v9; // edi@11
  signed int v10; // [sp+24h] [bp-278h]@4
  int v11; // [sp+28h] [bp-274h]@4
  int v12; // [sp+2Ch] [bp-270h]@1
  unsigned int v13; // [sp+3Ch] [bp-260h]@4
  const void *v14; // [sp+40h] [bp-25Ch]@5
  char *v15; // [sp+44h] [bp-258h]@6
  void *v16; // [sp+48h] [bp-254h]@1
  int v17; // [sp+4Ch] [bp-250h]@1
  int v18; // [sp+50h] [bp-24Ch]@1
  int v19; // [sp+54h] [bp-248h]@1
  int v20; // [sp+58h] [bp-244h]@1
  char v21; // [sp+5Ch] [bp-240h]@5
  int v22; // [sp+E0h] [bp-1BCh]@5
  int v23; // [sp+FCh] [bp-1A0h]@5
  unsigned int v24; // [sp+100h] [bp-19Ch]@5
  int v25; // [sp+104h] [bp-198h]@5
  int v26; // [sp+108h] [bp-194h]@5
  unsigned int v27; // [sp+1D4h] [bp-C8h]@5

  v12 = a1;
  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  v1 = dword_6FD400C4;
  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  v2 = dword_6FD400C8;
  v20 = 0;
  v17 = v1;
  v18 = dword_6FD400C8;
  v19 = 3;
  v3 = malloc(3 * v1 * dword_6FD400C8);
  v16 = v3;
  if ( !v3 )
    sub_6F756950();
  v4 = (int)v3;
  v20 = 1;
  glPixelStorei(3333, 1);
  glReadBuffer(1029);
  glFinish();
  glReadPixels(0, 0, v1, v2, 6407, 5121, v4);
  glFinish();
  if ( !dword_6FBB9578 )
  {
    sub_6F756AD0((int)&v16, 0x80u, 0x60u, 1);
    sub_6F757580((int)&v16);
    memcpy((void *)v12, v16, 0x9000u);
    if ( !v20 )
      return;
LABEL_15:
    free(v16);
    return;
  }
  if ( dword_6FBB9578 == 1 )
  {
    v11 = 640 * v2 / v1;
    sub_6F756AD0((int)&v16, 0x280u, v11, 1);
    sub_6F757580((int)&v16);
    v5 = (char *)v16;
    v13 = 0;
    v10 = 70;
    while ( 1 )
    {
      v14 = 0;
      v22 = sub_6F866BA0((int)&v21);
      sub_6F85CA64((int)&v22, 80, 416);
      sub_6F861D18(&v22, (int *)&v14, (signed int *)&v13);
      v23 = 640;
      v24 = v11;
      v25 = 3;
      v26 = 2;
      sub_6F85FC48((int)&v22);
      sub_6F85F780((int)&v22, v10, 1);
      sub_6F85CE74((int)&v22, 1);
      v6 = v27;
      for ( i = v25 * v23; v27 < v24; v6 = v27 )
      {
        v15 = &v5[i * v6];
        sub_6F85CF00((int)&v22, (int)&v15, 1u);
      }
      sub_6F85CC20((int)&v22);
      v8 = v13;
      if ( v13 <= 0x8FFB )
        break;
      v10 -= 5;
      if ( !v10 )
      {
        nullsub_10();
        v8 = v13;
        break;
      }
      sub_6F85CBBC((int)&v22);
    }
    v9 = v14;
    *(_DWORD *)v12 = v8;
    memcpy((void *)(v12 + 4), v9, v8);
    sub_6F85CBBC((int)&v22);
  }
  if ( v20 )
    goto LABEL_15;
}
