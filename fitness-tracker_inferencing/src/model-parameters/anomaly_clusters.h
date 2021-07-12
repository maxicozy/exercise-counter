/* Generated by Edge Impulse
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#ifndef _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
#define _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_

#include "edge-impulse-sdk/anomaly/anomaly.h"

// (before - mean) / scale
const float ei_classifier_anom_scale[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 1.209108694572878, 1.2605952496793738, 1.4000489306204016 };
const float ei_classifier_anom_mean[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 1.415219072977943, 1.4465173136920333, 2.0096972079097832 };

const ei_classifier_anom_cluster_t ei_classifier_anom_clusters[EI_CLASSIFIER_ANOM_CLUSTER_COUNT] = { { { 0.28245121240615845, -0.8619381785392761, -1.0563627481460571 }, 0.6971921683424023 }
, { { -1.1336421966552734, -1.1059143543243408, -1.4201509952545166 }, 0.5657943678393106 }
, { { -0.8126412630081177, -0.6506187915802002, -0.030293911695480347 }, 0.6400471929803975 }
, { { -0.7847346067428589, -0.01159042026847601, 0.00848944392055273 }, 0.6664057741818505 }
, { { -0.7489359974861145, 0.3653718829154968, 0.3672071695327759 }, 0.739410271068814 }
, { { 0.13242337107658386, -0.7465943098068237, -0.612204372882843 }, 0.8662625791417202 }
, { { 0.40625202655792236, 1.762803554534912, 0.38531383872032166 }, 1.016832242379358 }
, { { 0.11160580813884735, 0.5457488298416138, 0.24888484179973602 }, 0.8494473621617415 }
, { { -0.3784868121147156, -0.5023221969604492, 0.6127485632896423 }, 1.0645380735956524 }
, { { 0.9577347040176392, 0.4234813451766968, -0.0008134549134410918 }, 0.8345552714110832 }
, { { 1.0978971719741821, 0.7332216501235962, 0.7166143655776978 }, 0.7897133794063153 }
, { { 0.4277258813381195, 3.227445125579834, 2.0863356590270996 }, 1.1556926550666302 }
, { { -0.23504222929477692, -0.10790479183197021, 1.4959148168563843 }, 1.0359343481650392 }
, { { 1.2917696237564087, -0.2990196645259857, 1.41660737991333 }, 1.1606125731428374 }
, { { 2.0019617080688477, 0.648296594619751, 1.001749873161316 }, 1.0145647975718568 }
, { { -0.5794473886489868, -0.7290529608726501, -0.8692765235900879 }, 0.6097407251701995 }
, { { -0.7580419182777405, -0.2351868748664856, 0.4040447473526001 }, 0.6362381286848164 }
, { { 2.3341357707977295, 1.3692200183868408, 1.0391523838043213 }, 1.1414348034240116 }
, { { 1.9249649047851562, 0.6030948162078857, 0.22099483013153076 }, 1.1252897306438099 }
, { { 1.5231635570526123, -0.07057452201843262, -0.095066137611866 }, 0.9377696780871847 }
, { { 2.3494162559509277, 1.9748988151550293, 1.9436615705490112 }, 2.0535567445547818 }
, { { -0.308596670627594, 1.3523139953613281, -0.3884817063808441 }, 0.8788856505344014 }
, { { -0.12835516035556793, 2.4228694438934326, -0.35405412316322327 }, 0.9283784719891073 }
, { { 1.3793350458145142, 1.673284888267517, 1.210642695426941 }, 1.0169299760912267 }
, { { 0.34555184841156006, 0.850805401802063, 3.435589075088501 }, 1.1749639214293734 }
, { { -0.6770401000976562, 0.11415895819664001, -0.88447105884552 }, 0.8779513210881289 }
, { { -0.32139983773231506, 1.2391753196716309, 1.042556643486023 }, 1.033972528461804 }
, { { 0.3751532733440399, 2.1345486640930176, 2.369441032409668 }, 1.2002025064852617 }
, { { 0.6248912811279297, 0.8211122155189514, 2.2107443809509277 }, 1.268899222135516 }
, { { -0.2278158813714981, 3.251451015472412, 0.6855442523956299 }, 1.0949298406253174 }
, { { 0.16759425401687622, 2.1888437271118164, 1.247458815574646 }, 0.9465476486825066 }
, { { 3.913374900817871, 2.0377562046051025, 0.6740554571151733 }, 1.6706365606311473 }
};

#endif // _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
