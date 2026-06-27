signed int sub_6F684D90()
{
  _DWORD *v0; // eax@1
  int v1; // ebp@2
  const char *v2; // ecx@2
  const char *v3; // ecx@36
  const char *v4; // ecx@52
  const char *v5; // eax@66
  double v6; // ST10_8@74
  double v7; // ST10_8@76
  double v8; // ST10_8@78
  double v9; // ST10_8@80
  double v10; // ST10_8@94
  double v11; // ST10_8@96
  const char *v12; // edi@98
  const char *v13; // eax@98
  double v14; // ST10_8@102
  double v15; // ST10_8@104
  double v16; // ST10_8@106
  const char *v17; // edi@110
  const char *v18; // ecx@110
  const char *v19; // eax@112
  const char *v20; // edx@114
  const char *v21; // ecx@116
  int *v22; // edi@140
  const char *v23; // edi@507
  const char *v24; // eax@507
  const char *v25; // edx@509
  const char *v26; // ST08_4@513
  int v27; // edi@513
  const char *v28; // ebp@514
  double v29; // ST10_8@522
  const char *v30; // ebp@522
  const char *v31; // edi@530
  const char *v32; // edx@530
  const char *v33; // ebx@544
  double v34; // ST10_8@550
  const char *v35; // ebx@562
  const char *v36; // ebx@566
  const char *v37; // edx@566
  double v38; // ST10_8@574
  const char *v39; // edi@576
  const char *v40; // ecx@576
  const char *v41; // ebx@576
  FILE *v42; // eax@594
  FILE *v43; // esi@594
  signed int i; // [sp+2Ch] [bp-A0h]@140
  int v46; // [sp+2Ch] [bp-A0h]@513
  char *v47; // [sp+38h] [bp-94h]@42
  char v48; // [sp+40h] [bp-8Ch]@46
  char *v49; // [sp+50h] [bp-7Ch]@42
  char v50; // [sp+58h] [bp-74h]@48
  char *v51; // [sp+68h] [bp-64h]@42
  char v52; // [sp+70h] [bp-5Ch]@44
  char *v53; // [sp+80h] [bp-4Ch]@42
  char v54; // [sp+88h] [bp-44h]@50
  const char *v55; // [sp+98h] [bp-34h]@4
  char v56; // [sp+A0h] [bp-2Ch]@4

  v0 = sub_6F762F10(0);
  if ( !v0 )
    return -1;
  v1 = (int)v0;
  sub_6F765FC0((int)v0, "display settings", (const char *)&unk_6FB4B882);
  v2 = "true";
  if ( !dword_6FBB52C0 )
    v2 = "false";
  sub_6F765FC0(v1, "display settings:fullscreen", v2);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB52C4);
  sub_6F765FC0(v1, "display settings:fullscreenmode", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB52C8);
  sub_6F765FC0(v1, "display settings:fullscreenwidth", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB52CC);
  sub_6F765FC0(v1, "display settings:fullscreenheight", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB52D0);
  sub_6F765FC0(v1, "display settings:fullscreencolordepth", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB52D4);
  sub_6F765FC0(v1, "display settings:fullscreenrefreshrate", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB52D8);
  sub_6F765FC0(v1, "display settings:windowedwidth", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB52DC);
  sub_6F765FC0(v1, "display settings:windowedheight", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB52E0);
  sub_6F765FC0(v1, "display settings:windowedmode", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB52E4);
  sub_6F765FC0(v1, "display settings:waitforvsync", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB52E8);
  sub_6F765FC0(v1, "display settings:waitforvsyncvalue", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F765FC0(v1, "framerate", (const char *)&unk_6FB4B882);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB52EC);
  sub_6F765FC0(v1, "framerate:fpslimitation", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB52F0);
  sub_6F765FC0(v1, "framerate:framerate", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F765FC0(v1, "processing", (const char *)&unk_6FB4B882);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB52F4);
  sub_6F765FC0(v1, "processing:internalresolutionx", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB52F8);
  sub_6F765FC0(v1, "processing:internalresolutiony", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB52FC);
  sub_6F765FC0(v1, "processing:use32bitrenderer", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB5300);
  sub_6F765FC0(v1, "processing:ditheringmethod", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v3 = "true";
  if ( !dword_6FBB5304 )
    v3 = "false";
  sub_6F765FC0(v1, "processing:progressivescanrendering", v3);
  sub_6F765FC0(v1, "postprocessing", (const char *)&unk_6FB4B882);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB5308);
  sub_6F765FC0(v1, "postprocessing:deinterlacingmethod", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB530C);
  sub_6F765FC0(v1, "postprocessing:screenfiltering", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F695280(&v53, "\"");
  sub_6F695280(&v49, (const char *)&dword_6FBB5310);
  sub_6F695280(&v47, "\"");
  sub_6F7544E0((int)&v51, (int)&v47, (int)&v49);
  sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
  sub_6F765FC0(v1, "postprocessing:screenfiltername", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  if ( v51 != &v52 )
    j_free_1(v51);
  if ( v47 != &v48 )
    j_free_1(v47);
  if ( v49 != &v50 )
    j_free_1(v49);
  if ( v53 != &v54 )
    j_free_1(v53);
  v4 = "true";
  if ( !dword_6FBB5410 )
    v4 = "false";
  sub_6F765FC0(v1, "postprocessing:shaderstate", v4);
  sub_6F695280(&v53, "\"");
  sub_6F695280(&v49, &byte_6FBB5414);
  sub_6F695280(&v47, "\"");
  sub_6F7544E0((int)&v51, (int)&v47, (int)&v49);
  sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
  sub_6F765FC0(v1, "postprocessing:shadername", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  if ( v51 != &v52 )
    j_free_1(v51);
  if ( v47 != &v48 )
    j_free_1(v47);
  if ( v49 != &v50 )
    j_free_1(v49);
  if ( v53 != &v54 )
    j_free_1(v53);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB5514);
  sub_6F765FC0(v1, "postprocessing:shaderlevel", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v5 = "true";
  if ( !dword_6FBB5518 )
    v5 = "false";
  sub_6F765FC0(v1, "postprocessing:screenbilinearfiltering", v5);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB551C);
  sub_6F765FC0(v1, "postprocessing:brightness", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB5520);
  sub_6F765FC0(v1, "postprocessing:gamma", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB5524);
  sub_6F765FC0(v1, "postprocessing:contrast", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v6 = flt_6FBB5528;
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 58, "%f", SLOBYTE(v6));
  sub_6F765FC0(v1, "postprocessing:aspectratiofullscreenw", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v7 = flt_6FBB552C;
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 58, "%f", SLOBYTE(v7));
  sub_6F765FC0(v1, "postprocessing:aspectratiofullscreenh", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v8 = flt_6FBB5530;
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 58, "%f", SLOBYTE(v8));
  sub_6F765FC0(v1, "postprocessing:aspectratiowindowedw", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v9 = flt_6FBB5534;
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 58, "%f", SLOBYTE(v9));
  sub_6F765FC0(v1, "postprocessing:aspectratiowindowedh", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB5538);
  sub_6F765FC0(v1, "postprocessing:rotatescreen", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F765FC0(v1, "visible area", (const char *)&unk_6FB4B882);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB7560);
  sub_6F765FC0(v1, "visible area:preferences", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB7564);
  sub_6F765FC0(v1, "visible area:ntscleft", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB7568);
  sub_6F765FC0(v1, "visible area:ntsctop", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB756C);
  sub_6F765FC0(v1, "visible area:palleft", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB7570);
  sub_6F765FC0(v1, "visible area:paltop", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v10 = flt_6FBB7574;
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 58, "%f", SLOBYTE(v10));
  sub_6F765FC0(v1, "visible area:positionx", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v11 = flt_6FBB7578;
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 58, "%f", SLOBYTE(v11));
  sub_6F765FC0(v1, "visible area:positiony", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v12 = "true";
  v13 = "false";
  if ( dword_6FBB757C )
    v13 = "true";
  sub_6F765FC0(v1, "visible area:mirroringx", v13);
  if ( !dword_6FBB7580 )
    v12 = "false";
  sub_6F765FC0(v1, "visible area:mirroringy", v12);
  v14 = flt_6FBB7584;
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 58, "%f", SLOBYTE(v14));
  sub_6F765FC0(v1, "visible area:zoomingw", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v15 = flt_6FBB7588;
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 58, "%f", SLOBYTE(v15));
  sub_6F765FC0(v1, "visible area:zoomingh", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v16 = flt_6FBB758C;
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 58, "%f", SLOBYTE(v16));
  sub_6F765FC0(v1, "visible area:overscan", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F765FC0(v1, "advanced", (const char *)&unk_6FB4B882);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB553C);
  sub_6F765FC0(v1, "advanced:polygonrenderer", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v17 = "true";
  v18 = "false";
  if ( dword_6FBB5540 )
    v18 = "true";
  sub_6F765FC0(v1, "advanced:improvedcoordsaccuracy", v18);
  v19 = "false";
  if ( dword_6FBB5544 )
    v19 = "true";
  sub_6F765FC0(v1, "advanced:tesselation", v19);
  v20 = "false";
  if ( dword_6FBB5548 )
    v20 = "true";
  sub_6F765FC0(v1, "advanced:vram2mb", v20);
  v21 = "false";
  if ( (_DWORD)qword_6FBB554C )
    v21 = "true";
  sub_6F765FC0(v1, "advanced:texturereplacementcollect", v21);
  if ( !HIDWORD(qword_6FBB554C) )
    v17 = "false";
  sub_6F765FC0(v1, "advanced:texturereplacementreplace", v17);
  sub_6F695280(&v53, "\"");
  sub_6F695280(&v49, (const char *)&unk_6FBB5554);
  sub_6F695280(&v47, "\"");
  sub_6F7544E0((int)&v51, (int)&v47, (int)&v49);
  sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
  sub_6F765FC0(v1, "advanced:texturereplacementcollectpath", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  if ( v51 != &v52 )
    j_free_1(v51);
  if ( v47 != &v48 )
    j_free_1(v47);
  if ( v49 != &v50 )
    j_free_1(v49);
  if ( v53 != &v54 )
    j_free_1(v53);
  sub_6F695280(&v53, "\"");
  sub_6F695280(&v49, (const char *)&dword_6FBB6554);
  sub_6F695280(&v47, "\"");
  sub_6F7544E0((int)&v51, (int)&v47, (int)&v49);
  sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
  sub_6F765FC0(v1, "advanced:texturereplacementreplacepath", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  if ( v51 != &v52 )
    j_free_1(v51);
  if ( v47 != &v48 )
    j_free_1(v47);
  if ( v49 != &v50 )
    j_free_1(v49);
  if ( v53 != &v54 )
    j_free_1(v53);
  v22 = &dword_6FBB52C0;
  sub_6F765FC0(v1, "hot keys", (const char *)&unk_6FB4B882);
  for ( i = 0; ; i = 1 )
  {
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:configdialog");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 8912);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:showstatus");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 8976);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:showinfo");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 9040);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:fpslimitation");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 9104);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:fastforward");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 9168);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:togglefullscreen");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 9232);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:showhidecursor");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 9296);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:togglescreenbilinear");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 9360);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:decreaseinternalresolutionx");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 9424);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:increaseinternalresolutionx");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 9488);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:decreaseinternalresolutiony");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 9552);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:increaseinternalresolutiony");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 9616);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:changerenderercolormode");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 9680);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:changeditheringmethod");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 9744);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:changevisiblemode");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 9808);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:toggleshaderstate");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 9872);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:reloadshader");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 9936);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:decreaseshaderlevel");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10000);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:increaseshaderlevel");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10064);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:decreasebrightness");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10128);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:increasebrightness");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10192);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:decreasegamma");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10256);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:increasegamma");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10320);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:decreasecontrast");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10384);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:increasecontrast");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10448);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:rotatescreen");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10512);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:movescreenleft");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10576);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:movescreenright");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10640);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:movescreenup");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10704);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:movescreendown");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10768);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:decreasezoomw");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10832);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:increasezoomw");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10896);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:decreasezoomh");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 10960);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:increasezoomh");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11024);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:fliphorizontal");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11088);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:flipvertical");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11152);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:decreaseoverscan");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11216);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:increaseoverscan");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11280);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:resetscreensettings");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11344);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:changepolygonrenderer");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11408);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:toggleimprovedcoordinateaccuracy");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11472);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:toggletesselation");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11536);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:texturereplacementcollect");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11600);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:texturereplacementreplace");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11664);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:changerenderingmode");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11728);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:changerenderingwiredmode");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11792);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:changerenderingpointmode");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11856);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:changerenderingnontexturedmode");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11920);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:changerenderingtexturedmode");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 11984);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:toggleshowframedrawingprocess");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 12048);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:screenshot1");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 12112);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:screenshot2");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 12176);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:screenshot3");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 12240);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:screenshot4");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 12304);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:videorecording1");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 12368);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:videorecording2");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 12432);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:videorecording3");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 12496);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:videorecording4");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 12560);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:togglecommandsplaying");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 12624);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:screenshot5");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 12688);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 != &v54 )
      j_free_1(v53);
    sub_6F72E430((int)&v53, (int)sub_6F6941E0, 16, "%d", i);
    sub_6F695280(&v51, "hot keys:screenshot5toggle");
    sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
    sub_6F765FC0(v1, v55, (const char *)v22 + 12752);
    if ( v55 != &v56 )
      j_free_1((void *)v55);
    if ( v51 != &v52 )
      j_free_1(v51);
    if ( v53 == &v54 )
      break;
    v22 += 8;
    j_free_1(v53);
    if ( i == 1 )
      goto LABEL_507;
LABEL_601:
    ;
  }
  v22 += 8;
  if ( i != 1 )
    goto LABEL_601;
LABEL_507:
  v23 = "true";
  sub_6F765FC0(v1, "misc", (const char *)&unk_6FB4B882);
  v24 = "false";
  if ( dword_6FBB84D0 )
    v24 = "true";
  sub_6F765FC0(v1, "misc:showstatus", v24);
  v25 = "false";
  if ( dword_6FBB84D4 )
    v25 = "true";
  sub_6F765FC0(v1, "misc:showinfo", v25);
  if ( !dword_6FBB84D8 )
    v23 = "false";
  v26 = v23;
  v27 = 0;
  sub_6F765FC0(v1, "misc:screenrumble", v26);
  v46 = v1;
  do
  {
    while ( 1 )
    {
      sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB84DC[v27]);
      v28 = v55;
      sub_6F72E430((int)&v51, (int)sub_6F6941E0, 16, "%d", v27);
      sub_6F695280(&v49, "misc:crosshairtype");
      sub_6F7544E0((int)&v53, (int)&v49, (int)&v51);
      sub_6F765FC0(v46, v53, v28);
      if ( v53 != &v54 )
        j_free_1(v53);
      if ( v49 != &v50 )
        j_free_1(v49);
      if ( v51 != &v52 )
        j_free_1(v51);
      if ( v55 != &v56 )
        j_free_1((void *)v55);
      v29 = flt_6FBB8500[v27];
      sub_6F72E430((int)&v55, (int)sub_6F6941E0, 58, "%f", SLOBYTE(v29));
      v30 = v55;
      sub_6F72E430((int)&v51, (int)sub_6F6941E0, 16, "%d", v27);
      sub_6F695280(&v49, "misc:crosshairsize");
      sub_6F7544E0((int)&v53, (int)&v49, (int)&v51);
      sub_6F765FC0(v46, v53, v30);
      if ( v53 != &v54 )
        j_free_1(v53);
      if ( v49 != &v50 )
        j_free_1(v49);
      if ( v51 != &v52 )
        j_free_1(v51);
      if ( v55 == &v56 )
        break;
      ++v27;
      j_free_1((void *)v55);
      if ( v27 == 9 )
        goto LABEL_530;
    }
    ++v27;
  }
  while ( v27 != 9 );
LABEL_530:
  v31 = "true";
  v32 = "false";
  if ( dword_6FBB8524 )
    v32 = "true";
  sub_6F765FC0(v46, "misc:hidecursor", v32);
  if ( !dword_6FBB8528 )
    v31 = "false";
  sub_6F765FC0(v46, "misc:fakegpubusy", v31);
  sub_6F695280(&v53, "\"");
  sub_6F695280(&v49, (const char *)&unk_6FBB852C);
  sub_6F695280(&v47, "\"");
  sub_6F7544E0((int)&v51, (int)&v47, (int)&v49);
  sub_6F7544E0((int)&v55, (int)&v51, (int)&v53);
  sub_6F765FC0(v46, "misc:commandsrecordingpath", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  if ( v51 != &v52 )
    j_free_1(v51);
  if ( v47 != &v48 )
    j_free_1(v47);
  if ( v49 != &v50 )
    j_free_1(v49);
  if ( v53 != &v54 )
    j_free_1(v53);
  v33 = "true";
  if ( !dword_6FBB952C )
    v33 = "false";
  sub_6F765FC0(v46, "misc:disablescreensaverdpms", v33);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB9530);
  sub_6F765FC0(v46, "misc:screenshotatstart", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB9534);
  sub_6F765FC0(v46, "misc:videorecordingatstart", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v34 = flt_6FBB9574;
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 58, "%f", SLOBYTE(v34));
  sub_6F765FC0(v46, "misc:savestatepicsize", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB9578);
  sub_6F765FC0(v46, "misc:savestatepictype", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB957C);
  sub_6F765FC0(v46, "misc:messagefontsize", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB9580);
  sub_6F765FC0(v46, "misc:blitterthreads", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB9584);
  sub_6F765FC0(v46, "misc:rendererthreads", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB956C);
  sub_6F765FC0(v46, "misc:fastforwardrate", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v35 = "true";
  if ( !dword_6FBB9544 )
    v35 = "false";
  sub_6F765FC0(v46, "misc:watermark", v35);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB9548);
  sub_6F765FC0(v46, "misc:enablelogging", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v36 = "true";
  v37 = "false";
  if ( dword_6FBB954C )
    v37 = "true";
  sub_6F765FC0(v46, "misc:loggingtoconsole", v37);
  if ( !dword_6FBB9550 )
    v36 = "false";
  sub_6F765FC0(v46, "misc:loggingtofile", v36);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB9538);
  sub_6F765FC0(v46, "misc:screenshotcompressionlevel", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB953C);
  sub_6F765FC0(v46, "misc:videoquality", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v38 = flt_6FBB9540;
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 58, "%f", SLOBYTE(v38));
  sub_6F765FC0(v46, "misc:videoframeratemultiplier", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v39 = "true";
  v40 = "false";
  v41 = "false";
  if ( dword_6FBB9554 )
    v40 = "true";
  sub_6F765FC0(v46, "misc:enabledebugger", v40);
  if ( dword_6FBB9588 )
    v41 = "true";
  sub_6F765FC0(v46, "misc:savedialogparameters", v41);
  if ( !dword_6FBB958C )
    v39 = "false";
  sub_6F765FC0(v46, "misc:savesettingsonexit", v39);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB9590);
  sub_6F765FC0(v46, "misc:windowx", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB9594);
  sub_6F765FC0(v46, "misc:windowy", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB9598);
  sub_6F765FC0(v46, "misc:dialogx", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB959C);
  sub_6F765FC0(v46, "misc:dialogy", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB95A0);
  sub_6F765FC0(v46, "misc:dialogw", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  sub_6F72E430((int)&v55, (int)sub_6F6941E0, 16, "%d", dword_6FBB95A4);
  sub_6F765FC0(v46, "misc:dialogh", v55);
  if ( v55 != &v56 )
    j_free_1((void *)v55);
  v42 = fopen((const char *)dword_6FBB5038, "w+");
  v43 = v42;
  if ( v42 )
  {
    sub_6F765220(v46, v42);
    fclose(v43);
  }
  sub_6F767D60(v46);
  return 0;
}
