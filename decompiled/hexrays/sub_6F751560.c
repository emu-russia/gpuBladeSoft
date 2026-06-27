void sub_6F751560()
{
  SOCKET v0; // eax@2
  SOCKET v1; // edx@2
  int v2; // ebx@2
  char *v3; // ecx@8
  int v4; // esi@9
  int v5; // eax@9
  unsigned int v6; // edx@10
  int v7; // eax@16
  int v8; // ebx@17
  char *v9; // eax@18
  int v10; // esi@19
  char *v11; // edi@19
  int *v12; // ecx@21
  int v13; // esi@22
  int v14; // eax@22
  unsigned int v15; // edx@23
  int v16; // ebx@29
  char *v17; // ecx@40
  int v18; // edi@41
  int v19; // eax@41
  unsigned int v20; // edx@42
  int v21; // [sp+0h] [bp-14Ch]@19
  int v22; // [sp+4h] [bp-148h]@19
  int v23; // [sp+8h] [bp-144h]@19
  int v24; // [sp+Ch] [bp-140h]@16
  int v25; // [sp+10h] [bp-13Ch]@0
  int v26; // [sp+14h] [bp-138h]@0
  int v27; // [sp+18h] [bp-134h]@0
  int v28; // [sp+1Ch] [bp-130h]@0
  int v29; // [sp+20h] [bp-12Ch]@0
  __int64 v30; // [sp+24h] [bp-128h]@0
  char v31; // [sp+30h] [bp-11Ch]@5
  int v32; // [sp+34h] [bp-118h]@20
  int v33; // [sp+38h] [bp-114h]@20
  int v34; // [sp+3Ch] [bp-110h]@20
  int v35; // [sp+40h] [bp-10Ch]@20
  int v36; // [sp+44h] [bp-108h]@20
  int v37; // [sp+48h] [bp-104h]@20
  int v38; // [sp+4Ch] [bp-100h]@20
  int v39; // [sp+50h] [bp-FCh]@20
  int v40; // [sp+54h] [bp-F8h]@20
  int v41; // [sp+58h] [bp-F4h]@20
  char v42; // [sp+5Ch] [bp-F0h]@20
  int v43; // [sp+60h] [bp-ECh]@20
  int v44; // [sp+64h] [bp-E8h]@20
  int v45; // [sp+68h] [bp-E4h]@20
  int v46; // [sp+6Ch] [bp-E0h]@20
  float v47; // [sp+70h] [bp-DCh]@20
  int v48; // [sp+74h] [bp-D8h]@20
  int v49; // [sp+78h] [bp-D4h]@20

  if ( dword_6FBB9554 )
  {
    v0 = accept(dword_6FD40104, 0, 0);
    v1 = dword_70258AE8;
    v2 = v0;
    if ( v0 != -1 )
    {
      if ( dword_70258AE8 )
      {
        shutdown(dword_70258AE8, 2);
        closesocket(dword_70258AE8);
      }
      v26 = 64;
      v25 = 1;
      dword_70258AE8 = v2;
      sub_6F751530((int)&v31, 256, "gpuBladeSoft v%i.%i.%i debugging console.\r\n", 1);
      if ( dword_70258AE8 )
      {
        v17 = &v31;
        do
        {
          v18 = *(_DWORD *)v17;
          v17 += 4;
          v19 = ~v18 & (v18 - 16843009);
        }
        while ( !(v19 & 0x80808080) );
        v20 = (v19 & 0x80808080) >> 16;
        if ( v19 & 0x8080 )
          LOBYTE(v20) = v19 & 0x80;
        if ( !(v19 & 0x8080) )
          v17 += 2;
        send(dword_70258AE8, &v31, &v17[-__CFADD__((_BYTE)v20, (_BYTE)v20) - 3] - &v31, 0);
      }
      sub_6F751530((int)&v31, 256, "Send '?' for command list.\r\n");
      if ( !dword_70258AE8 )
      {
        dword_70258AE4 = 0;
        return;
      }
      v3 = &v31;
      do
      {
        v4 = *(_DWORD *)v3;
        v3 += 4;
        v5 = ~v4 & (v4 - 16843009);
      }
      while ( !(v5 & 0x80808080) );
      v6 = (v5 & 0x80808080) >> 16;
      if ( v5 & 0x8080 )
        LOBYTE(v6) = v5 & 0x80;
      if ( !(v5 & 0x8080) )
        v3 += 2;
      send(dword_70258AE8, &v31, &v3[-__CFADD__((_BYTE)v6, (_BYTE)v6) - 3] - &v31, 0);
      v1 = dword_70258AE8;
      dword_70258AE4 = 0;
    }
    if ( v1 )
    {
LABEL_16:
      v7 = recv(v1, &byte_702588E0[dword_70258AE4], 512 - dword_70258AE4, 0);
      if ( v7 )
      {
        v8 = dword_70258AE4;
        if ( v7 == -1 )
        {
          if ( !dword_70258AE4 )
            goto LABEL_28;
        }
        else
        {
          v8 = v7 + dword_70258AE4;
        }
      }
      else
      {
        v8 = dword_70258AE4;
        dword_70258AE8 = 0;
        if ( !dword_70258AE4 )
          goto LABEL_28;
      }
      dword_70258AE4 = v8;
      byte_702588E0[v8] = 0;
      v9 = strstr(byte_702588E0, "\r\n");
      if ( v9 )
      {
        v10 = v9 - byte_702588E0;
        v11 = (char *)&unk_702588E2 + v9 - byte_702588E0;
        strncpy(byte_6FBB50C0, byte_702588E0, v9 - byte_702588E0);
        HIDWORD(v30) = 512 - (v10 + 2);
        memmove(byte_702588E0, v11, 512 - (v10 + 2));
        dword_70258AE4 = v8 - (v10 + 2);
        memset(v11, 0, HIDWORD(v30));
        byte_6FBB50C0[v10] = 0;
        if ( v10 > 0 )
        {
          sub_6F681700(
            v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v10 + 2,
            *(int *)&v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
          if ( dword_70258AE8 )
          {
            v12 = &dword_6FBB97C0;
            do
            {
              v13 = *v12;
              ++v12;
              v14 = ~v13 & (v13 - 16843009);
            }
            while ( !(v14 & 0x80808080) );
            v15 = (v14 & 0x80808080) >> 16;
            if ( v14 & 0x8080 )
              LOBYTE(v15) = v14 & 0x80;
            if ( !(v14 & 0x8080) )
              v12 = (int *)((char *)v12 + 2);
            send(
              dword_70258AE8,
              (const char *)&dword_6FBB97C0,
              (char *)v12 - ((char *)&dword_6FBB97C0 + __CFADD__((_BYTE)v15, (_BYTE)v15) + 3),
              0);
          }
        }
      }
      else
      {
        byte_6FBB50C0[0] = 0;
      }
LABEL_28:
      while ( dword_6FBB51F0 )
      {
        sub_6F760540(0.001);
        if ( !dword_6FBB51F0 )
          break;
        v16 = dword_6FBB51F4;
        if ( dword_6FBB51F4 )
          goto LABEL_47;
        v1 = dword_70258AE8;
        if ( dword_70258AE8 )
          goto LABEL_16;
      }
      v16 = dword_6FBB51F4;
      if ( !dword_6FBB51F4 )
        return;
LABEL_47:
      dword_6FBB51F4 = v16 - 1;
    }
  }
}
