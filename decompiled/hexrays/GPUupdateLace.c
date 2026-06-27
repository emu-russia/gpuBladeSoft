int __usercall GPUupdateLace@<eax>(int a1@<ebp>)
{
  int v1; // ecx@16
  int v2; // eax@21
  bool v3; // cf@25
  bool v4; // zf@25
  char *v5; // esi@26
  const char *v6; // edi@26
  signed int v7; // ecx@26
  const char *v8; // esi@30
  bool v9; // cf@34
  bool v10; // zf@34
  char *v11; // esi@35
  const char *v12; // edi@35
  signed int v13; // ecx@35
  signed int v14; // eax@39
  bool v15; // cf@42
  bool v16; // zf@42
  char *v17; // esi@43
  const char *v18; // edi@43
  signed int v19; // ecx@43
  int v20; // eax@47
  int v21; // eax@48
  int v22; // edi@51
  int v23; // edx@55
  int v24; // eax@59
  int v25; // edi@63
  int v26; // edx@67
  int v27; // eax@71
  int v28; // edi@75
  double v29; // st7@81
  double v30; // st7@85
  double v31; // st7@89
  double v32; // st7@93
  double v33; // st7@97
  double v34; // st7@101
  double v35; // st7@105
  double v36; // st7@109
  const char *v37; // esi@112
  const char *v38; // eax@116
  double v39; // st7@121
  double v40; // st7@125
  int v41; // eax@135
  int v42; // ecx@140
  int v43; // ebx@145
  int v44; // eax@150
  int v45; // ecx@155
  int v47; // edi@174
  const char *v48; // ebx@178
  int v49; // esi@181
  const char *v50; // ebx@183
  const char *v51; // eax@186
  const char *v52; // esi@189
  int v53; // eax@208
  const char *v54; // ecx@212
  const char *v55; // eax@215
  const char *v56; // ebx@218
  const char *v57; // ecx@221
  int v58; // ebx@232
  void *v59; // eax@238
  signed __int64 v60; // kr00_8@241
  signed __int64 v61; // kr08_8@243
  signed __int64 v62; // rax@243
  char *v63; // eax@243
  signed int v64; // eax@245
  const char *v65; // [sp+4h] [bp-58h]@0
  int v66; // [sp+10h] [bp-4Ch]@232
  int *v67; // [sp+14h] [bp-48h]@230
  int v68; // [sp+18h] [bp-44h]@235
  int v69; // [sp+1Ch] [bp-40h]@235
  const char *v70; // [sp+20h] [bp-3Ch]@235
  void *v71; // [sp+24h] [bp-38h]@235
  void *v72; // [sp+28h] [bp-34h]@235
  const char *v73; // [sp+2Ch] [bp-30h]@235
  int v74; // [sp+30h] [bp-2Ch]@235
  int v75; // [sp+34h] [bp-28h]@235
  void *v76; // [sp+4Ch] [bp-10h]@235

  nullsub_10();
  _InterlockedExchange((volatile signed __int32 *)&dword_6FB489C4, sub_6F7604A0(0, &dword_6FD400CC));
  if ( !dword_6FBB96A8 )
    goto LABEL_2;
  v58 = dword_6FBB52C0;
  dword_6FBB96A8 = 0;
  dword_6FBB52C0 = 0;
  sub_6F6961A0();
  dword_6FBB52C0 = v58;
  sub_6F69CB30(&v66);
  if ( dword_700584C0 )
  {
    if ( dword_6FB489CC )
    {
      if ( dword_6FB489C8 )
        goto LABEL_235;
      goto LABEL_305;
    }
    sub_6F733F20();
    if ( dword_700584C0 && !dword_6FB489C8 )
    {
LABEL_305:
      sub_6F732400();
      goto LABEL_235;
    }
  }
LABEL_235:
  v68 = 64;
  v69 = 0;
  v72 = &unk_6FB53053;
  v73 = "plugins";
  v75 = 0;
  v70 = "open";
  v71 = dword_6FCFFEFC;
  v74 = 1;
  v67 = (int *)60;
  ShellExecuteExA((SHELLEXECUTEINFOA *)&v67);
  WaitForSingleObject(v76, 0xFFFFFFFF);
  CloseHandle(v76);
  if ( !dword_6FB489C8 )
  {
LABEL_290:
    if ( !dword_700584C0 || dword_700584C8 )
      goto LABEL_238;
    goto LABEL_304;
  }
  if ( !dword_700584C0 )
  {
    sub_6F734300();
    goto LABEL_290;
  }
  if ( !dword_700584C8 )
LABEL_304:
    sub_6F733C20();
LABEL_238:
  v59 = (void *)v66;
  if ( *(_DWORD *)(v66 + 4) == 1 )
  {
    sub_6F69C440(v66);
    v59 = (void *)v66;
  }
  free(v59);
LABEL_2:
  if ( dword_6FBB96AC )
  {
    dword_6FBB84D0 ^= 1u;
    dword_6FBB96AC = 0;
  }
  if ( dword_6FBB96B0 )
  {
    dword_6FBB84D4 ^= 1u;
    dword_6FBB96B0 = 0;
  }
  if ( dword_6FBB96B4 )
  {
    dword_6FBB96B4 = 0;
    v47 = dword_6FBB52EC + 1;
    if ( dword_6FBB52EC + 1 > 2 )
      v47 = 0;
    dword_6FBB52EC = v47;
    if ( !byte_70058448 && sub_6F9624B0((int)&byte_70058448) )
    {
      sub_6F695280(dword_70058400, "Disabled");
      sub_6F695280(&unk_70058418, "Auto-detection");
      sub_6F695280(&unk_70058430, "Manual");
      sub_6F962670((int)&byte_70058448);
      sub_6F6813F0((int)sub_6F72A9A0);
    }
    sub_6F72F480("Fps limitation changed to \"%s\"", dword_70058400[6 * dword_6FBB52EC]);
    if ( !dword_6FBB96B8 )
    {
LABEL_8:
      if ( !dword_6FBB96BC )
        goto LABEL_9;
      goto LABEL_181;
    }
  }
  else if ( !dword_6FBB96B8 )
  {
    goto LABEL_8;
  }
  dword_6FBB52C0 ^= 1u;
  v48 = "fullscreen";
  dword_6FBB96B8 = 0;
  sub_6F6961A0();
  if ( !dword_6FBB52C0 )
    v48 = "windowed";
  sub_6F72F480("Window mode changed to \"%s\"", v48);
  if ( !dword_6FBB96BC )
  {
LABEL_9:
    if ( !dword_6FBB96C0 )
      goto LABEL_10;
    goto LABEL_186;
  }
LABEL_181:
  v49 = dword_6FBB8524;
  dword_6FBB96BC = 0;
  dword_6FBB8524 ^= 1u;
  if ( v49 == 1 )
    ShowCursor(1);
  else
    ShowCursor(0);
  v50 = "hidden";
  if ( !dword_6FBB8524 )
    v50 = "showed";
  sub_6F72F480("Cursor was %s", v50);
  if ( dword_6FBB96C0 )
  {
LABEL_186:
    v51 = "enabled";
    dword_6FBB96C0 = 0;
    if ( dword_6FBB5518 == 1 )
      v51 = "disabled";
    dword_6FBB5518 ^= 1u;
    sub_6F72F480("Screen bilinear filtering: %s", v51);
  }
LABEL_10:
  if ( dword_6FBB96C4 || dword_6FBB96C8 || dword_6FBB96CC || dword_6FBB96D0 )
  {
    dword_6FBB96C4 = 0;
    dword_6FBB96C8 = 0;
    dword_6FBB96CC = 0;
    dword_6FBB96D0 = 0;
    nullsub_10();
    v65 = "Not implemented: internal resolution changing 'on fly'";
    sub_6F684C80();
  }
  if ( dword_6FBB96D4 )
  {
    dword_6FBB96D4 = 0;
    sub_6F72F480("Not implemented", v65);
  }
  if ( dword_6FBB96D8 )
  {
    dword_6FBB96D8 = 0;
    v1 = dword_6FBB5300 + 1;
    if ( dword_6FBB5300 + 1 > 2 )
      v1 = 0;
    dword_6FBB5300 = v1;
    if ( !byte_700583E8 && sub_6F9624B0((int)&byte_700583E8) )
    {
      sub_6F695280(dword_700583A0, "None");
      sub_6F695280(&unk_700583B8, "PSX");
      sub_6F695280(&unk_700583D0, "Improved");
      sub_6F962670((int)&byte_700583E8);
      sub_6F6813F0((int)sub_6F72A9E0);
    }
    sub_6F72F480("Dithering method changed to \"%s\"", dword_700583A0[6 * dword_6FBB5300]);
  }
  if ( dword_6FBB96DC )
  {
    dword_6FBB96DC = 0;
    v2 = dword_6FBB7560 + 1;
    if ( dword_6FBB7560 + 1 > 6 )
      v2 = 0;
    dword_6FBB7560 = v2;
    if ( !byte_70058388 && sub_6F9624B0((int)&byte_70058388) )
    {
      sub_6F695280(dword_700582E0, "Perfect");
      sub_6F695280(&unk_700582F8, "Standard");
      sub_6F695280(&unk_70058310, "Custom");
      sub_6F695280(&unk_70058328, "Full VRAM (4-bit)");
      sub_6F695280(&unk_70058340, "Full VRAM (8-bit)");
      sub_6F695280(&unk_70058358, "Full VRAM (15-bit)");
      sub_6F695280(dword_70058370, "Full VRAM (24-bit)");
      sub_6F962670((int)&byte_70058388);
      sub_6F6813F0((int)sub_6F72AA20);
    }
    sub_6F72F480("Visible area mode changed to \"%s\"", dword_700582E0[6 * dword_6FBB7560]);
  }
  v3 = 0;
  v4 = dword_6FBB96E0 == 0;
  if ( dword_6FBB96E0 )
  {
    v5 = &byte_6FBB5414;
    v6 = "Disabled";
    v7 = 9;
    do
    {
      if ( !v7 )
        break;
      v3 = (unsigned __int8)*v5 < *v6;
      v4 = *v5++ == *v6++;
      --v7;
    }
    while ( v4 );
    if ( (!v3 && !v4) != v3 )
    {
      v8 = "enabled";
      dword_6FBB96E0 = 0;
      if ( dword_6FBB5410 == 1 )
        v8 = "disabled";
      dword_6FBB5410 ^= 1u;
      sub_6F72F480("Shader state: %s", v8);
    }
  }
  if ( dword_6FBB96E4 )
  {
    v64 = dword_6FBBDB50;
    dword_6FBB96E4 = 0;
    if ( dword_6FBBDB50 > 0 )
    {
      if ( dword_6FBBDADC )
      {
        glDeleteTextures(1, (int)dword_6FBBDAD8);
        v64 = dword_6FBBDB50;
        dword_6FBBDAD0[0] = 0;
        dword_6FBBDAD4 = 0;
        dword_6FBBDAD8[0] = 0;
        dword_6FBBDADC = 0;
      }
      if ( v64 > 1 )
      {
        if ( dword_6FBBDAEC )
        {
          glDeleteTextures(1, (int)&dword_6FBBDAE8);
          v64 = dword_6FBBDB50;
          dword_6FBBDAE0 = 0;
          dword_6FBBDAE4 = 0;
          dword_6FBBDAE8 = 0;
          dword_6FBBDAEC = 0;
        }
        if ( v64 > 2 )
        {
          if ( dword_6FBBDAFC )
          {
            glDeleteTextures(1, (int)&dword_6FBBDAF8);
            v64 = dword_6FBBDB50;
            dword_6FBBDAF0 = 0;
            dword_6FBBDAF4 = 0;
            dword_6FBBDAF8 = 0;
            dword_6FBBDAFC = 0;
          }
          if ( v64 > 3 )
          {
            if ( dword_6FBBDB0C )
            {
              glDeleteTextures(1, (int)&dword_6FBBDB08);
              v64 = dword_6FBBDB50;
              dword_6FBBDB00 = 0;
              dword_6FBBDB04 = 0;
              dword_6FBBDB08 = 0;
              dword_6FBBDB0C = 0;
            }
            if ( v64 > 4 )
            {
              if ( dword_6FBBDB1C )
              {
                glDeleteTextures(1, (int)&dword_6FBBDB18);
                v64 = dword_6FBBDB50;
                dword_6FBBDB10 = 0;
                dword_6FBBDB14 = 0;
                dword_6FBBDB18 = 0;
                dword_6FBBDB1C = 0;
              }
              if ( v64 > 5 )
              {
                if ( dword_6FBBDB2C )
                {
                  glDeleteTextures(1, (int)&dword_6FBBDB28);
                  v64 = dword_6FBBDB50;
                  dword_6FBBDB20 = 0;
                  dword_6FBBDB24 = 0;
                  dword_6FBBDB28 = 0;
                  dword_6FBBDB2C = 0;
                }
                if ( v64 > 6 )
                {
                  if ( dword_6FBBDB3C )
                  {
                    glDeleteTextures(1, (int)&dword_6FBBDB38);
                    v64 = dword_6FBBDB50;
                    dword_6FBBDB30 = 0;
                    dword_6FBBDB34 = 0;
                    dword_6FBBDB38 = 0;
                    dword_6FBBDB3C = 0;
                  }
                  if ( v64 > 7 && dword_6FBBDB4C )
                  {
                    glDeleteTextures(1, (int)&dword_6FBBDB48);
                    dword_6FBBDB40 = 0;
                    dword_6FBBDB44 = 0;
                    dword_6FBBDB48 = 0;
                    dword_6FBBDB4C = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    dword_6FBBDB50 = 0;
    dword_6FBBDB54 = 0;
    sub_6F6930C0();
    sub_6F72F480("Shader is reloaded", v65);
  }
  v9 = 0;
  v10 = dword_6FBB96E8 == 0;
  if ( dword_6FBB96E8 )
  {
    v11 = &byte_6FBB5414;
    v12 = "Disabled";
    v13 = 9;
    do
    {
      if ( !v13 )
        break;
      v9 = (unsigned __int8)*v11 < *v12;
      v10 = *v11++ == *v12++;
      --v13;
    }
    while ( v10 );
    if ( (!v9 && !v10) == v9 )
    {
      if ( !dword_6FBB96F0 )
        goto LABEL_54;
      goto LABEL_51;
    }
    v14 = dword_6FBB5514;
    dword_6FBB96E8 = 0;
    if ( dword_6FBB5514 - 1 < 0 )
    {
      dword_6FBB5514 = 0;
      v14 = 1;
    }
    else
    {
      --dword_6FBB5514;
    }
    sub_6F72F480("Shader level: %i", v14);
  }
  v15 = 0;
  v16 = dword_6FBB96EC == 0;
  if ( dword_6FBB96EC )
  {
    v17 = &byte_6FBB5414;
    v18 = "Disabled";
    v19 = 9;
    do
    {
      if ( !v19 )
        break;
      v15 = (unsigned __int8)*v17 < *v18;
      v16 = *v17++ == *v18++;
      --v19;
    }
    while ( v16 );
    if ( (!v15 && !v16) != v15 )
    {
      v20 = dword_6FBB5514;
      dword_6FBB96EC = 0;
      if ( dword_6FBB5514 + 1 > 3 )
      {
        dword_6FBB5514 = 3;
        v21 = 4;
      }
      else
      {
        ++dword_6FBB5514;
        v21 = v20 + 2;
      }
      sub_6F72F480("Shader level: %i", v21);
    }
  }
  if ( dword_6FBB96F0 )
  {
LABEL_51:
    dword_6FBB96F0 = 0;
    v22 = dword_6FBB551C - 5;
    if ( dword_6FBB551C - 5 < -100 )
    {
      dword_6FBB551C = -100;
      v22 = -100;
    }
    else
    {
      dword_6FBB551C -= 5;
    }
    sub_6F72F480("Brightness: %i", v22);
  }
LABEL_54:
  if ( dword_6FBB96F4 )
  {
    dword_6FBB96F4 = 0;
    v23 = dword_6FBB551C + 5;
    if ( dword_6FBB551C + 5 > 100 )
    {
      dword_6FBB551C = 100;
      v23 = 100;
    }
    else
    {
      dword_6FBB551C += 5;
    }
    sub_6F72F480("Brightness: %i", v23);
  }
  if ( dword_6FBB96F8 )
  {
    dword_6FBB96F8 = 0;
    v24 = dword_6FBB5520 - 5;
    if ( dword_6FBB5520 - 5 < -100 )
    {
      dword_6FBB5520 = -100;
      v24 = -100;
    }
    else
    {
      dword_6FBB5520 -= 5;
    }
    sub_6F72F480("Gamma: %i", v24);
  }
  if ( dword_6FBB96FC )
  {
    dword_6FBB96FC = 0;
    v25 = dword_6FBB5520 + 5;
    if ( dword_6FBB5520 + 5 > 100 )
    {
      dword_6FBB5520 = 100;
      v25 = 100;
    }
    else
    {
      dword_6FBB5520 += 5;
    }
    sub_6F72F480("Gamma: %i", v25);
  }
  if ( dword_6FBB9700 )
  {
    dword_6FBB9700 = 0;
    v26 = dword_6FBB5524 - 5;
    if ( dword_6FBB5524 - 5 < -100 )
    {
      dword_6FBB5524 = -100;
      v26 = -100;
    }
    else
    {
      dword_6FBB5524 -= 5;
    }
    sub_6F72F480("Contrast: %i", v26);
  }
  if ( dword_6FBB9704 )
  {
    dword_6FBB9704 = 0;
    v27 = dword_6FBB5524 + 5;
    if ( dword_6FBB5524 + 5 > 100 )
    {
      dword_6FBB5524 = 100;
      v27 = 100;
    }
    else
    {
      dword_6FBB5524 += 5;
    }
    sub_6F72F480("Contrast: %i", v27);
  }
  if ( dword_6FBB9708 )
  {
    dword_6FBB9708 = 0;
    v28 = dword_6FBB5538 + 1;
    if ( dword_6FBB5538 + 1 > 3 )
      v28 = 0;
    dword_6FBB5538 = v28;
    if ( !byte_700582C0 && sub_6F9624B0((int)&byte_700582C0) )
    {
      sub_6F695280(dword_70058260, "0*");
      sub_6F695280(&unk_70058278, "90*");
      sub_6F695280(&unk_70058290, "180*");
      sub_6F695280(&unk_700582A8, "270*");
      sub_6F962670((int)&byte_700582C0);
      sub_6F6813F0((int)sub_6F72AA70);
    }
    sub_6F72F480("Screen rotated on: \"%s\"", dword_70058260[6 * dword_6FBB5538]);
  }
  if ( dword_6FBB970C )
  {
    dword_6FBB970C = 0;
    if ( flt_6FBB7574 < -99.5 )
    {
      v29 = -100.0;
      flt_6FBB7574 = -100.0;
    }
    else
    {
      v29 = flt_6FBB7574 - 0.5;
      flt_6FBB7574 = v29;
    }
    sub_6F72F480("Screen offset x: %.1f%s", LODWORD(v29), (_DWORD)(*(unsigned __int64 *)&v29 >> 32), "%%");
  }
  if ( dword_6FBB9710 )
  {
    dword_6FBB9710 = 0;
    if ( flt_6FBB7574 > 99.5 )
    {
      v30 = 100.0;
      flt_6FBB7574 = 100.0;
    }
    else
    {
      v30 = flt_6FBB7574 + 0.5;
      flt_6FBB7574 = v30;
    }
    sub_6F72F480("Screen offset x: %.1f%s", LODWORD(v30), (_DWORD)(*(unsigned __int64 *)&v30 >> 32), "%%");
  }
  if ( dword_6FBB9714 )
  {
    dword_6FBB9714 = 0;
    if ( flt_6FBB7578 < -99.5 )
    {
      v31 = -100.0;
      flt_6FBB7578 = -100.0;
    }
    else
    {
      v31 = flt_6FBB7578 - 0.5;
      flt_6FBB7578 = v31;
    }
    sub_6F72F480("Screen offset y: %.1f%s", LODWORD(v31), (_DWORD)(*(unsigned __int64 *)&v31 >> 32), "%%");
  }
  if ( dword_6FBB9718 )
  {
    dword_6FBB9718 = 0;
    if ( flt_6FBB7578 > 99.5 )
    {
      v32 = 100.0;
      flt_6FBB7578 = 100.0;
    }
    else
    {
      v32 = flt_6FBB7578 + 0.5;
      flt_6FBB7578 = v32;
    }
    sub_6F72F480("Screen offset y: %.1f%s", LODWORD(v32), (_DWORD)(*(unsigned __int64 *)&v32 >> 32), "%%");
  }
  if ( dword_6FBB971C )
  {
    dword_6FBB971C = 0;
    if ( flt_6FBB7584 < -99.5 )
    {
      v33 = -100.0;
      flt_6FBB7584 = -100.0;
    }
    else
    {
      v33 = flt_6FBB7584 - 0.5;
      flt_6FBB7584 = v33;
    }
    sub_6F72F480("Screen width: %.1f%s", LODWORD(v33), (_DWORD)(*(unsigned __int64 *)&v33 >> 32), "%%");
  }
  if ( dword_6FBB9720 )
  {
    dword_6FBB9720 = 0;
    if ( flt_6FBB7584 > 99.5 )
    {
      v34 = 100.0;
      flt_6FBB7584 = 100.0;
    }
    else
    {
      v34 = flt_6FBB7584 + 0.5;
      flt_6FBB7584 = v34;
    }
    sub_6F72F480("Screen width: %.1f%s", LODWORD(v34), (_DWORD)(*(unsigned __int64 *)&v34 >> 32), "%%");
  }
  if ( dword_6FBB9724 )
  {
    dword_6FBB9724 = 0;
    if ( flt_6FBB7588 < -99.5 )
    {
      v35 = -100.0;
      flt_6FBB7588 = -100.0;
    }
    else
    {
      v35 = flt_6FBB7588 - 0.5;
      flt_6FBB7588 = v35;
    }
    sub_6F72F480("Screen height: %.1f%s", LODWORD(v35), (_DWORD)(*(unsigned __int64 *)&v35 >> 32), "%%");
  }
  if ( dword_6FBB9728 )
  {
    dword_6FBB9728 = 0;
    if ( flt_6FBB7588 > 99.5 )
    {
      v36 = 100.0;
      flt_6FBB7588 = 100.0;
    }
    else
    {
      v36 = flt_6FBB7588 + 0.5;
      flt_6FBB7588 = v36;
    }
    sub_6F72F480("Screen height: %.1f%s", LODWORD(v36), (_DWORD)(*(unsigned __int64 *)&v36 >> 32), "%%");
  }
  if ( dword_6FBB972C )
  {
    v37 = "flipped horizontally";
    dword_6FBB972C = 0;
    if ( dword_6FBB757C == 1 )
      v37 = "not flipped horizontally";
    dword_6FBB757C ^= 1u;
    sub_6F72F480("Screen %s", v37);
  }
  if ( dword_6FBB9730 )
  {
    v38 = "flipped vertically";
    dword_6FBB9730 = 0;
    if ( dword_6FBB7580 == 1 )
      v38 = "not flipped vertically";
    dword_6FBB7580 ^= 1u;
    sub_6F72F480("Screen %s", v38);
  }
  if ( dword_6FBB9734 )
  {
    dword_6FBB9734 = 0;
    if ( flt_6FBB758C < -9.5 )
    {
      v39 = -10.0;
      flt_6FBB758C = -10.0;
    }
    else
    {
      v39 = flt_6FBB758C - 0.5;
      flt_6FBB758C = v39;
    }
    sub_6F72F480("Screen overscan: %.1f%s", LODWORD(v39), (_DWORD)(*(unsigned __int64 *)&v39 >> 32), "%%");
  }
  if ( dword_6FBB9738 )
  {
    dword_6FBB9738 = 0;
    if ( flt_6FBB758C > 9.5 )
    {
      v40 = 10.0;
      flt_6FBB758C = 10.0;
    }
    else
    {
      v40 = flt_6FBB758C + 0.5;
      flt_6FBB758C = v40;
    }
    sub_6F72F480("Screen overscan: %.1f%s", LODWORD(v40), (_DWORD)(*(unsigned __int64 *)&v40 >> 32), "%%");
  }
  if ( dword_6FBB973C )
  {
    dword_6FBB973C = 0;
    flt_6FBB7574 = 0.0;
    flt_6FBB7578 = 0.0;
    flt_6FBB7584 = 0.0;
    dword_6FBB551C = 0;
    dword_6FBB5520 = 0;
    dword_6FBB5524 = 0;
    dword_6FBB5538 = 0;
    dword_6FBB757C = 0;
    dword_6FBB7580 = 0;
    flt_6FBB7588 = 0.0;
    flt_6FBB758C = 0.0;
  }
  if ( dword_6FBB9784 )
  {
    dword_6FBB9784 = 0;
    v53 = dword_6FBB553C + 1;
    if ( dword_6FBB553C + 1 > 2 )
      v53 = 0;
    dword_6FBB553C = v53;
    sub_6F733910();
    sub_6F733910();
    if ( !byte_70058248 && sub_6F9624B0((int)&byte_70058248) )
    {
      sub_6F695280(dword_70058200, "Standard");
      sub_6F695280(&unk_70058218, "Quad");
      sub_6F695280(&unk_70058230, "Perspective-corrected");
      sub_6F962670((int)&byte_70058248);
      sub_6F6813F0((int)sub_6F72AAB0);
    }
    sub_6F72F480("Polygon renderer was changed to: %s", dword_70058200[6 * dword_6FBB553C]);
    if ( !dword_6FBB9788 )
    {
LABEL_131:
      if ( !dword_6FBB978C )
        goto LABEL_132;
      goto LABEL_215;
    }
  }
  else if ( !dword_6FBB9788 )
  {
    goto LABEL_131;
  }
  dword_6FBB9788 = 0;
  sub_6F733910();
  dword_6FBB5540 ^= 1u;
  sub_6F733910();
  v54 = "enabled";
  if ( !dword_6FBB5540 )
    v54 = "disabled";
  sub_6F72F480("Gte accuracy: %s", v54);
  if ( !dword_6FBB978C )
  {
LABEL_132:
    if ( !dword_6FBB9740 )
      goto LABEL_133;
    goto LABEL_218;
  }
LABEL_215:
  dword_6FBB978C = 0;
  sub_6F733910();
  dword_6FBB5544 ^= 1u;
  sub_6F733910();
  v55 = "enabled";
  if ( !dword_6FBB5544 )
    v55 = "disabled";
  sub_6F72F480("Tesselation: %s", v55);
  if ( !dword_6FBB9740 )
  {
LABEL_133:
    if ( !dword_6FBB9744 )
      goto LABEL_134;
    goto LABEL_221;
  }
LABEL_218:
  dword_6FBB9740 = 0;
  v56 = "enabled";
  sub_6F697000();
  LODWORD(qword_6FBB554C) = qword_6FBB554C ^ 1;
  sub_6F6989C0();
  if ( !(_DWORD)qword_6FBB554C )
    v56 = "disabled";
  sub_6F72F480("Texture replacement collect: %s", v56);
  if ( dword_6FBB9744 )
  {
LABEL_221:
    dword_6FBB9744 = 0;
    sub_6F697000();
    HIDWORD(qword_6FBB554C) ^= 1u;
    sub_6F6989C0();
    v57 = "enabled";
    if ( !HIDWORD(qword_6FBB554C) )
      v57 = "disabled";
    sub_6F72F480("Texture replacement replace: %s", v57);
  }
LABEL_134:
  if ( dword_6FBB9748 )
  {
    dword_6FBB9748 = 0;
    v41 = dword_6FBB9558 + 1;
    if ( dword_6FBB9558 + 1 > 7 )
      v41 = 0;
    dword_6FBB9558 = v41;
    if ( !byte_700581E0 && sub_6F9624B0((int)&byte_700581E0) )
    {
      sub_6F695280(dword_70058120, "Standard");
      sub_6F695280(&unk_70058138, "Wired");
      sub_6F695280(&unk_70058150, "Point");
      sub_6F695280(&unk_70058168, "Non-textured");
      sub_6F695280(&unk_70058180, "Non-textured+Wired");
      sub_6F695280(&unk_70058198, "Non-textured+Point");
      sub_6F695280(&unk_700581B0, "Standard+Wired");
      sub_6F695280(dword_700581C8, "Standard+Point");
      sub_6F962670((int)&byte_700581E0);
      sub_6F6813F0((int)sub_6F72AAF0);
    }
    sub_6F72F480("Rendering mode: %s", dword_70058120[6 * dword_6FBB9558]);
  }
  if ( dword_6FBB974C )
  {
    dword_6FBB974C = 0;
    v42 = dword_6FBB955C + 1;
    if ( dword_6FBB955C + 1 > 2 )
      v42 = 0;
    dword_6FBB955C = v42;
    if ( !byte_70058108 && sub_6F9624B0((int)&byte_70058108) )
    {
      sub_6F695280(dword_700580C0, "Standard");
      sub_6F695280(&unk_700580D8, "Order");
      sub_6F695280(&unk_700580F0, "White");
      sub_6F962670((int)&byte_70058108);
      sub_6F6813F0((int)sub_6F72AB40);
    }
    sub_6F72F480("Wired rendering mode: %s", dword_700580C0[6 * dword_6FBB955C]);
  }
  if ( dword_6FBB9750 )
  {
    dword_6FBB9750 = 0;
    v43 = dword_6FBB9560 + 1;
    if ( dword_6FBB9560 + 1 > 2 )
      v43 = 0;
    dword_6FBB9560 = v43;
    if ( !byte_700580A8 && sub_6F9624B0((int)&byte_700580A8) )
    {
      sub_6F695280(dword_70058060, "Standard");
      sub_6F695280(&unk_70058078, "Order");
      sub_6F695280(&unk_70058090, "White");
      sub_6F962670((int)&byte_700580A8);
      sub_6F6813F0((int)sub_6F72AB80);
    }
    sub_6F72F480("Point rendering mode: %s", dword_70058060[6 * dword_6FBB9560]);
  }
  if ( dword_6FBB9754 )
  {
    dword_6FBB9754 = 0;
    v44 = dword_6FBB9564 + 1;
    if ( dword_6FBB9564 + 1 > 1 )
      v44 = 0;
    dword_6FBB9564 = v44;
    if ( !byte_70058050 && sub_6F9624B0((int)&byte_70058050) )
    {
      sub_6F695280(dword_70058020, "Standard");
      sub_6F695280(&dword_70058038, "Order");
      sub_6F962670((int)&byte_70058050);
      sub_6F6813F0((int)sub_6F72ABC0);
    }
    sub_6F72F480("Nontextured rendering mode: %s", dword_70058020[6 * dword_6FBB9564]);
  }
  if ( dword_6FBB9758 )
  {
    dword_6FBB9758 = 0;
    v45 = dword_6FBB9568 + 1;
    if ( dword_6FBB9568 + 1 > 1 )
      v45 = 0;
    dword_6FBB9568 = v45;
    sub_6F6A8040();
    if ( !byte_70058010 && sub_6F9624B0((int)&byte_70058010) )
    {
      sub_6F695280(dword_70057FE0, "Standard");
      sub_6F695280(&dword_70057FF8, "Test");
      sub_6F962670((int)&byte_70058010);
      sub_6F6813F0((int)sub_6F72AC00);
    }
    sub_6F72F480("Textured rendering mode: %s", dword_70057FE0[6 * dword_6FBB9568]);
  }
  if ( dword_6FBB975C )
  {
    v52 = "enabled";
    dword_6FBB975C = 0;
    if ( dword_6FBB9570 == 1 )
      v52 = "disabled";
    dword_6FBB9570 ^= 1u;
    sub_6F72F480("Show drawing process: %s", v52);
    if ( !dword_6FBB9760 )
    {
LABEL_161:
      if ( !dword_6FBB9764 )
        goto LABEL_162;
      goto LABEL_193;
    }
  }
  else if ( !dword_6FBB9760 )
  {
    goto LABEL_161;
  }
  dword_6FBB9760 = 0;
  dword_6FBB50A4 = dword_6FBB50A4 == 0;
  if ( !dword_6FBB9764 )
  {
LABEL_162:
    if ( !dword_6FBB9768 )
      goto LABEL_163;
    goto LABEL_194;
  }
LABEL_193:
  dword_6FBB9764 = 0;
  dword_6FBB50A0 = dword_6FBB50A0 == 0;
  if ( !dword_6FBB9768 )
  {
LABEL_163:
    if ( !dword_6FBB976C )
      goto LABEL_164;
    goto LABEL_195;
  }
LABEL_194:
  dword_6FBB9768 = 0;
  dword_6FBB509C = dword_6FBB509C == 0;
  if ( !dword_6FBB976C )
    goto LABEL_164;
LABEL_195:
  dword_6FBB976C = 0;
  if ( dword_6FBB5098 )
  {
LABEL_164:
    if ( !dword_6FBB9794 )
      goto LABEL_165;
    goto LABEL_197;
  }
  sub_6F753DF0(a1);
  if ( !dword_6FBB9794 )
  {
LABEL_165:
    if ( !dword_6FBB9798 )
      goto LABEL_166;
LABEL_198:
    dword_6FBB9798 = 0;
    dword_70057FC0 ^= 1u;
    if ( !dword_6FBB9770 )
      goto LABEL_167;
    goto LABEL_199;
  }
LABEL_197:
  dword_6FBB9794 = 0;
  dword_6FD41408 = dword_6FD41408 == 0;
  if ( dword_6FBB9798 )
    goto LABEL_198;
LABEL_166:
  if ( !dword_6FBB9770 )
    goto LABEL_167;
LABEL_199:
  dword_6FBB9770 = 0;
  if ( !dword_6FD400E0 )
  {
    sub_6F755500(a1);
    if ( !dword_6FBB9774 )
      goto LABEL_168;
    goto LABEL_201;
  }
  sub_6F753CE0();
LABEL_167:
  if ( !dword_6FBB9774 )
    goto LABEL_168;
LABEL_201:
  dword_6FBB9774 = 0;
  if ( !dword_6FBB5078 )
  {
    sub_6F754DD0(a1);
    if ( !dword_6FBB9778 )
      goto LABEL_169;
    goto LABEL_203;
  }
  sub_6F753BD0();
LABEL_168:
  if ( !dword_6FBB9778 )
    goto LABEL_169;
LABEL_203:
  dword_6FBB9778 = 0;
  if ( !dword_6FBB5094 )
  {
    sub_6F754690(a1);
    if ( !dword_6FBB977C )
      goto LABEL_170;
    goto LABEL_205;
  }
  sub_6F753270();
LABEL_169:
  if ( !dword_6FBB977C )
    goto LABEL_170;
LABEL_205:
  dword_6FBB977C = 0;
  if ( dword_6FD400DC )
  {
    dword_6FD400DC = 0;
    sub_6F72F480("Video4 recording stopped", v65);
    if ( dword_6FD400D8 )
    {
      sub_6F88C240(dword_6FD400D8);
      dword_6FD400D8 = 0;
    }
  }
  else
  {
    sub_6F751BF0(a1);
  }
LABEL_170:
  if ( dword_6FBB9790 )
  {
    dword_6FBB9790 = 0;
    v60 = sub_6F935480();
    sub_6F695280(
      &v67,
      "/home/blade/emu-projects/rbpse/rbpse/bin/Linux/x86_64/captured/videos/video4_2018-09-15_19-38-01-602677852.raw.gz");
    sub_6F756050(&v67);
    if ( v67 != &v69 )
      j_free_1(v67);
    v61 = sub_6F935480() - v60;
    sub_6F95A010((char *)&dword_6FB4A1E0, (int)"waited for ", 11);
    v62 = sub_6F8A13E0(v61, v61, 1000i64);
    v63 = sub_6F9072C0((char *)&dword_6FB4A1E0, v62, SHIDWORD(v62));
    sub_6F95A010(v63, (int)" microseconds\n", 14);
    exit(0);
  }
  if ( dword_6FBB9780 )
  {
    if ( dword_6FBB956C > dword_6FB489C0 )
    {
      ++dword_6FB489C0;
      sub_6F751560();
      return sub_6F734070();
    }
    dword_6FB489C0 = 0;
    sub_6F751560();
  }
  else
  {
    sub_6F751560();
  }
  sub_6F6A5EA0();
  sub_6F7566C0();
  if ( dword_6FBB5098 )
  {
    v67 = (int *)7;
    sub_6F88DA60(dword_6FD400E4, (char *)&v67, 4u);
    if ( dword_6FBB5098 == 9 )
    {
      dword_6FBB5098 = 0;
      if ( dword_6FD400E4 )
      {
        sub_6F88C240(dword_6FD400E4);
        dword_6FD400E4 = 0;
      }
    }
    else
    {
      ++dword_6FBB5098;
    }
  }
  if ( dword_6FD400DC )
  {
    v67 = (int *)7;
    sub_6F88DA60(dword_6FD400D8, (char *)&v67, 4u);
  }
  sub_6F734150();
  return sub_6F734070();
}
